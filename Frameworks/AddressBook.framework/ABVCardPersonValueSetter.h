/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardPersonValueSetter : ABVCardValueSetter {
    void *_person;
    struct __CFArray { } *_properties;
}

+ (struct __CFArray { }*)supportedProperties;

- (void)dealloc;
- (struct __CFArray { }*)foundProperties;
- (id)fullName;
- (id)initWithPerson:(void*)arg1;
- (BOOL)setImageData:(id)arg1;
- (BOOL)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (void)setValueInTemporaryCache:(id)arg1 forProperty:(unsigned int)arg2;
- (void*)valueForProperty:(unsigned int)arg1;

@end