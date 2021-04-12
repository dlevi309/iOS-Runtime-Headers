/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaymentHeroImageControllerDelegate.h>

@class UIView, PKImageSequenceView, PKPaymentHeroImageController, UIImageView, NSMutableArray, NSMutableDictionary, NSString;

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate> {

	long long _context;
	CGSize _aspectSize;
	BOOL _imageDownloadFailed;
	UIView* _backgroundView;
	UIView* _bottomDividerView;
	UIView* _heroDeviceView;
	PKImageSequenceView* _cardCarouselView;
	PKPaymentHeroImageController* _heroImageController;
	UIImageView* _faceIDGlyphView;
	NSMutableArray* _heroImageIdentifiers;
	NSMutableDictionary* _heroImagesDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetBackgroundColor;
-(void)startAnimation;
-(void)layoutSubviews;
-(void)_configureHeroCardsFromHeroImages:(id)arg1 ;
-(id)_heroImages;
-(BOOL)_isSmallPhone;
-(double)_phoneTopPadding;
-(double)_phoneCardHeightInset;
-(CGRect)_watchCardViewFrameForBounds:(CGRect)arg1 ;
-(void)_imageFailedToDownload:(id)arg1 ;
-(CGSize)_watchCardCarouselSizeForSize:(CGSize)arg1 ;
-(void)stopAnimation;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_promptTapToRadarWithTitle:(id)arg1 description:(id)arg2 ;
-(id)initWithContext:(long long)arg1 heroImageController:(id)arg2 heroImages:(id)arg3 ;
-(double)_instructionFontSizeForContext:(long long)arg1 ;
-(id)pk_childrenForAppearance;
-(void)heroImageController:(id)arg1 didFinishDownloadingImageData:(id)arg2 forImage:(id)arg3 error:(id)arg4 ;
-(void)_createSubviews;
@end

