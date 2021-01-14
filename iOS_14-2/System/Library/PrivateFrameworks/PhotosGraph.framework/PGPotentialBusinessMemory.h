/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphBusinessNode, NSString;

@interface PGPotentialBusinessMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphBusinessNode* _businessNode;
	long long _year;

}

@property (readonly) PGGraphBusinessNode * businessNode;              //@synthesize businessNode=_businessNode - In the implementation block
@property (readonly) long long year;                                  //@synthesize year=_year - In the implementation block
@property (readonly) NSString * business; 
-(long long)year;
-(NSString *)business;
-(id)initWithBusinessNode:(id)arg1 year:(long long)arg2 ;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphBusinessNode *)businessNode;
@end

