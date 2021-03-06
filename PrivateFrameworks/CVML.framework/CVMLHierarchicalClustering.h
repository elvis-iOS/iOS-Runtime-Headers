/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLHierarchicalClustering : NSObject <CVMLClustering> {
    struct shared_ptr<vision::mod::ClusteringAbstract> { 
        struct ClusteringAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addDescriptorIds:(id)arg1 withSimilarityMatrix:(id)arg2 error:(id*)arg3;
- (BOOL)cancelClustering:(id*)arg1;
- (id)getClustersWithOptions:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)suggestionsForClusterIds:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;
- (id)suggestionsForClusterIdsWithFlags:(id)arg1 affinityThreshold:(float)arg2 error:(id*)arg3;

@end
