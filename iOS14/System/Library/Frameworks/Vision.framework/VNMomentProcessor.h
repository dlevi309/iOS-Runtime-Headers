/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class VNMPContext;

@interface VNMomentProcessor : NSObject {

	VNMPContext* _context;

}

@property (nonatomic,retain) VNMPContext * context;              //@synthesize context=_context - In the implementation block
+(id)sortImageDescriptorsChronologically:(id)arg1 ;
-(VNMPContext *)context;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)computeNaturalClusteringOfImageDescriptors:(id)arg1 error:(id*)arg2 ;
-(id)computeClusteringOfImageDescriptors:(id)arg1 intoKGroups:(int)arg2 error:(id*)arg3 ;
-(id)computeClusteringTreeForImageDescriptors:(id)arg1 error:(id*)arg2 ;
-(id)computeClusteringTreeForImageDescriptors:(id)arg1 assumeDescriptorsAreSorted:(BOOL)arg2 error:(id*)arg3 ;
-(id)convertClusterNodesListToDescriptorsList:(vector<MPClusteringTreeNode *, std::__1::allocator<MPClusteringTreeNode *> >*)arg1 ;
-(id)performClustersPostprocessing:(id)arg1 error:(id*)arg2 ;
-(id)computeClusteringForClusteringTree:(id)arg1 intoKGroups:(int)arg2 error:(id*)arg3 ;
-(id)getKey:(id)arg1 fromDictionary:(id)arg2 withDefault:(id)arg3 ;
-(id)computeClusteringForClusteringTree:(id)arg1 usingThreshold:(float)arg2 error:(id*)arg3 ;
-(id)computeNaturalClusteringForClusteringTree:(id)arg1 error:(id*)arg2 ;
-(void)setContext:(VNMPContext *)arg1 ;
@end

