/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSData, UIView, UIImage, UILabel;

@interface CKBusinessMacToolbarView : UIView {

	BOOL _showingInStandAloneWindow;
	NSData* _bannerImageData;
	double _preferredHeight;
	UIView* _leftItemView;
	UIImage* _bannerImage;
	UILabel* _fallbackTitleLabel;
	CGRect _detailsPopoverFrame;

}

@property (nonatomic,retain) UIView * leftItemView;                       //@synthesize leftItemView=_leftItemView - In the implementation block
@property (nonatomic,retain) UIImage * bannerImage;                       //@synthesize bannerImage=_bannerImage - In the implementation block
@property (nonatomic,retain) UILabel * fallbackTitleLabel;                //@synthesize fallbackTitleLabel=_fallbackTitleLabel - In the implementation block
@property (nonatomic,retain) NSData * bannerImageData;                    //@synthesize bannerImageData=_bannerImageData - In the implementation block
@property (assign,nonatomic) double preferredHeight;                      //@synthesize preferredHeight=_preferredHeight - In the implementation block
@property (assign,nonatomic) BOOL showingInStandAloneWindow;              //@synthesize showingInStandAloneWindow=_showingInStandAloneWindow - In the implementation block
@property (assign,nonatomic) CGRect detailsPopoverFrame;                  //@synthesize detailsPopoverFrame=_detailsPopoverFrame - In the implementation block
-(CGRect)detailsPopoverFrame;
-(void)setBannerImage:(UIImage *)arg1 ;
-(void)setFallbackTitle:(id)arg1 ;
-(UILabel *)fallbackTitleLabel;
-(void)setBannerImageData:(NSData *)arg1 ;
-(void)setFallbackTitleColor:(id)arg1 ;
-(NSData *)bannerImageData;
-(void)setDetailsPopoverFrame:(CGRect)arg1 ;
-(void)setFallbackTitleLabel:(UILabel *)arg1 ;
-(BOOL)showingInStandAloneWindow;
-(void)layoutSubviews;
-(double)preferredHeight;
-(void)setShowingInStandAloneWindow:(BOOL)arg1 ;
-(UIView *)leftItemView;
-(void)setPreferredHeight:(double)arg1 ;
-(void)setLeftItemView:(UIView *)arg1 ;
-(UIImage *)bannerImage;
@end

