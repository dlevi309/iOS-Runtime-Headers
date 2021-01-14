/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet;

@interface PGPotentialRecurrentTripMemory : PGPotentialMemory {

	NSArray* _tripNodes;
	NSSet* _locationNodes;

}

@property (readonly) NSArray * tripNodes;                //@synthesize tripNodes=_tripNodes - In the implementation block
@property (readonly) NSSet * locationNodes;              //@synthesize locationNodes=_locationNodes - In the implementation block
-(NSSet *)locationNodes;
-(id)initWithTripNodes:(id)arg1 locationNodes:(id)arg2 momentNodes:(id)arg3 ;
-(NSArray *)tripNodes;
@end

