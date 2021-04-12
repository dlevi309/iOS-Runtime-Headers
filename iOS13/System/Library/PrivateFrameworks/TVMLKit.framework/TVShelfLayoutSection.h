/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface TVShelfLayoutSection : NSObject {

	long long _numberOfItems;
	CGRect* _itemFrames;
	double _sectionHeaderHorizontalOffset;
	double _sectionHeaderVerticalBump;
	CGRect _itemsBoundingFrame;
	CGRect _sectionHeaderFrame;
	UIEdgeInsets _sectionInset;

}

@property (assign,nonatomic) long long numberOfItems;                           //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (assign,nonatomic) CGRect itemsBoundingFrame;                         //@synthesize itemsBoundingFrame=_itemsBoundingFrame - In the implementation block
@property (assign,nonatomic) CGRect sectionHeaderFrame;                         //@synthesize sectionHeaderFrame=_sectionHeaderFrame - In the implementation block
@property (assign,nonatomic) double sectionHeaderHorizontalOffset;              //@synthesize sectionHeaderHorizontalOffset=_sectionHeaderHorizontalOffset - In the implementation block
@property (assign,nonatomic) double sectionHeaderVerticalBump;                  //@synthesize sectionHeaderVerticalBump=_sectionHeaderVerticalBump - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                         //@synthesize sectionInset=_sectionInset - In the implementation block
-(void)dealloc;
-(long long)numberOfItems;
-(UIEdgeInsets)sectionInset;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(void)setNumberOfItems:(long long)arg1 ;
-(CGRect)itemFrameAtIndex:(long long)arg1 ;
-(void)setItemFrame:(CGRect)arg1 atIndex:(long long)arg2 ;
-(CGRect)firstItemFrame;
-(CGRect)lastItemFrame;
-(CGRect)itemsBoundingFrame;
-(void)setItemsBoundingFrame:(CGRect)arg1 ;
-(CGRect)sectionHeaderFrame;
-(void)setSectionHeaderFrame:(CGRect)arg1 ;
-(double)sectionHeaderHorizontalOffset;
-(void)setSectionHeaderHorizontalOffset:(double)arg1 ;
-(double)sectionHeaderVerticalBump;
-(void)setSectionHeaderVerticalBump:(double)arg1 ;
@end
