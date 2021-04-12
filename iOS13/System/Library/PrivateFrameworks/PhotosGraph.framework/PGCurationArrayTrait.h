/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGCurationTrait.h>

@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait {

	NSArray* _items;
	NSArray* _negativeItems;

}

@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * negativeItems;              //@synthesize negativeItems=_negativeItems - In the implementation block
-(id)debugDescription;
-(BOOL)isActive;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 negativeItems:(id)arg2 ;
-(NSArray *)negativeItems;
@end

