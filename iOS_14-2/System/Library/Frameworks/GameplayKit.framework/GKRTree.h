/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKRTree : NSObject {

	GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))>* _cRTree;
	unsigned long long _queryReserve;

}

@property (assign) unsigned long long queryReserve;              //@synthesize queryReserve=_queryReserve - In the implementation block
+(id)treeWithMaxNumberOfChildren:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithMaxNumberOfChildren:(unsigned long long)arg1 ;
-(void)setQueryReserve:(unsigned long long)arg1 ;
-(unsigned long long)queryReserve;
-(void)addElement:(id)arg1 boundingRectMin:(long long)arg2 ;
-(void)removeElement:(id)arg1 ;
-(id)elementsInBoundingRectMin:rectMax:;
@end

