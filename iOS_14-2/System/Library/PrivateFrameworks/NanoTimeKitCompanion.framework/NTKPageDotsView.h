/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, CLKDevice, NSMutableArray;

@interface NTKPageDotsView : UIView {

	unsigned long long _numberOfPages;
	unsigned long long _currentPage;
	UIColor* _currentPageColor;
	UIColor* _otherPageColor;
	double _dotDiameter;
	double _dotPadding;
	CLKDevice* _device;
	NSMutableArray* _pageDots;

}

@property (nonatomic,readonly) CLKDevice * device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSMutableArray * pageDots;                     //@synthesize pageDots=_pageDots - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPages;              //@synthesize numberOfPages=_numberOfPages - In the implementation block
@property (assign,nonatomic) unsigned long long currentPage;                //@synthesize currentPage=_currentPage - In the implementation block
@property (nonatomic,retain) UIColor * currentPageColor;                    //@synthesize currentPageColor=_currentPageColor - In the implementation block
@property (nonatomic,retain) UIColor * otherPageColor;                      //@synthesize otherPageColor=_otherPageColor - In the implementation block
@property (assign,nonatomic) double dotDiameter;                            //@synthesize dotDiameter=_dotDiameter - In the implementation block
@property (assign,nonatomic) double dotPadding;                             //@synthesize dotPadding=_dotPadding - In the implementation block
-(unsigned long long)currentPage;
-(CLKDevice *)device;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCurrentPage:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPages;
-(void)setNumberOfPages:(unsigned long long)arg1 ;
-(id)initForDevice:(id)arg1 ;
-(double)dotDiameter;
-(void)setDotDiameter:(double)arg1 ;
-(void)applyDefaultConfiguration;
-(void)setPageDots:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pageDots;
-(id)makePageDot;
-(void)_regenerateDots;
-(void)setDotPadding:(double)arg1 ;
-(double)dotPadding;
-(void)setCurrentPageColor:(UIColor *)arg1 ;
-(void)setOtherPageColor:(UIColor *)arg1 ;
-(UIColor *)currentPageColor;
-(UIColor *)otherPageColor;
@end

