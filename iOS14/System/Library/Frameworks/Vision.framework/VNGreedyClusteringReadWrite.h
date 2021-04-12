/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNGreedyClusteringReadOnly.h>
#import <libobjc.A.dylib/VNClusteringWritable.h>

@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable> {

	shared_ptr<vision::mod::FaceClustering>* m_ClusteringImpl;

}
-(id)getClustersWithOptions:(id)arg1 error:(id*)arg2 ;
-(long long)_cancellableUpdate:(ImageDescriptorBufferAbstract*)arg1 facesToMove:(vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > >*)arg2 requestRevision:(unsigned long long)arg3 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
@end

