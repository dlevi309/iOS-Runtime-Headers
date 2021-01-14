/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)numberOfItems;
-(UIEdgeInsets)sectionInset;
-(void)setNumberOfItems:(long long)arg1 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(void)dealloc;
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

