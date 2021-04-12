/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIGreedyClustering : HMFObject <HMFLogging> {

	shared_ptr<homeai::clustering::GreedyClusterer>* _greedyClusterer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(float)faceDistanceFromDescriptor:(id)arg1 toDescriptor:(id)arg2 ;
+(BOOL)addFaceObservations:(id)arg1 toFaceDescriptorBuffer:(ImageDescriptorBufferFloat32*)arg2 error:(id*)arg3 ;
+(id)centermostFaceprintInCluster:(id)arg1 faceObservations:(id)arg2 ;
-(id)initWithError:(id*)arg1 ;
-(id)initWithFaceThreshold:(id)arg1 singleLinkThreshold:(id)arg2 percentConnectionsThreshold:(id)arg3 faceprintRevision:(long long)arg4 error:(id*)arg5 ;
-(id)convertToClusters:(vector<std::__1::pair<long long, long long>, std::__1::allocator<std::__1::pair<long long, long long> > >*)arg1 ;
-(id)getClustersWithFaces:(id)arg1 error:(id*)arg2 ;
@end

