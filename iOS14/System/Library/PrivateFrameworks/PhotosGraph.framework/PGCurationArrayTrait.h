/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithItems:(id)arg1 ;
-(BOOL)isActive;
-(id)debugDescription;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 negativeItems:(id)arg2 ;
-(NSArray *)negativeItems;
@end

