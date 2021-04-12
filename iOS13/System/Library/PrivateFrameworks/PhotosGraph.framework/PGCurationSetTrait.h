/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGCurationTrait.h>

@class NSSet;

@interface PGCurationSetTrait : PGCurationTrait {

	NSSet* _items;
	NSSet* _negativeItems;

}

@property (nonatomic,readonly) NSSet * items;                      //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSSet * negativeItems;              //@synthesize negativeItems=_negativeItems - In the implementation block
-(id)debugDescription;
-(BOOL)isActive;
-(NSSet *)items;
-(id)initWithItems:(id)arg1 ;
-(id)initWithItems:(id)arg1 negativeItems:(id)arg2 ;
-(NSSet *)negativeItems;
@end

