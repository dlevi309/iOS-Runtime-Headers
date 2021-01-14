/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PUFilmstripView, NSNumber;

@interface PUFilmstripWrapperView : UIView {

	BOOL _isAnimating;
	BOOL _isExpanded;
	PUFilmstripView* _filmstripView;
	NSNumber* _anchoredLeft;
	CGSize _expandedSize;
	CGRect _visibleRect;

}

@property (assign,setter=setAnimating:,nonatomic) BOOL isAnimating;                    //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                       //@synthesize visibleRect=_visibleRect - In the implementation block
@property (nonatomic,retain) PUFilmstripView * filmstripView;                          //@synthesize filmstripView=_filmstripView - In the implementation block
@property (assign,setter=setExpanded:,nonatomic) BOOL isExpanded;                      //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,setter=setExpandedSize:,nonatomic) CGSize expandedSize;              //@synthesize expandedSize=_expandedSize - In the implementation block
@property (nonatomic,copy) NSNumber * anchoredLeft;                                    //@synthesize anchoredLeft=_anchoredLeft - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(CGSize)expandedSize;
-(BOOL)isExpanded;
-(void)setVisibleRect:(CGRect)arg1 ;
-(CGRect)visibleRect;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setFilmstripView:(PUFilmstripView *)arg1 ;
-(PUFilmstripView *)filmstripView;
-(void)setAnchoredLeft:(NSNumber *)arg1 ;
-(void)setExpandedSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)isAnimating;
-(NSNumber *)anchoredLeft;
@end

