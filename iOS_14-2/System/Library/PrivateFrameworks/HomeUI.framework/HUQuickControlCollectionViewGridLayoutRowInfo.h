/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


#import <HomeUI/HomeUI-Structs.h>
@class NSArray;

@interface HUQuickControlCollectionViewGridLayoutRowInfo : NSObject {

	unsigned long long _numberOfItems;
	NSArray* _itemLayouts;
	CGSize _contentSize;
	CGPoint _rowOrigin;

}

@property (assign,nonatomic) unsigned long long numberOfItems;              //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                            //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGPoint rowOrigin;                             //@synthesize rowOrigin=_rowOrigin - In the implementation block
@property (nonatomic,copy) NSArray * itemLayouts;                           //@synthesize itemLayouts=_itemLayouts - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(unsigned long long)numberOfItems;
-(CGSize)contentSize;
-(void)setNumberOfItems:(unsigned long long)arg1 ;
-(void)setRowOrigin:(CGPoint)arg1 ;
-(void)setItemLayouts:(NSArray *)arg1 ;
-(CGPoint)rowOrigin;
-(NSArray *)itemLayouts;
@end

