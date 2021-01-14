/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithItems:(id)arg1 ;
-(BOOL)isActive;
-(id)debugDescription;
-(NSSet *)items;
-(id)initWithItems:(id)arg1 negativeItems:(id)arg2 ;
-(NSSet *)negativeItems;
@end

