/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <UIKitCore/_UINavigationBarTitleView.h>

@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView {

	BOOL _photosCarouselMode;
	LPLinkView* _linkView;
	NSLayoutConstraint* _linkTrailingAnchor;

}

@property (nonatomic,retain) NSLayoutConstraint * linkTrailingAnchor;              //@synthesize linkTrailingAnchor=_linkTrailingAnchor - In the implementation block
@property (nonatomic,retain) LPLinkView * linkView;                                //@synthesize linkView=_linkView - In the implementation block
@property (assign,nonatomic) BOOL photosCarouselMode;                              //@synthesize photosCarouselMode=_photosCarouselMode - In the implementation block
-(void)contentDidChange;
-(long long)preferredContentSizeForSize:(long long)arg1 ;
-(void)setLinkTrailingAnchor:(NSLayoutConstraint *)arg1 ;
-(void)layoutSubviews;
-(LPLinkView *)linkView;
-(void)setPhotosCarouselMode:(BOOL)arg1 ;
-(void)_updateContent;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(NSLayoutConstraint *)linkTrailingAnchor;
-(BOOL)photosCarouselMode;
@end

