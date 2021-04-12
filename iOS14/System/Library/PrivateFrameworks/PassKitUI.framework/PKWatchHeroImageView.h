/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface PKWatchHeroImageView : UIView {

	UIImageView* _watchView;
	CGSize _originalWatchViewSize;
	UILabel* _doneLabel;
	BOOL _hideDoneLabel;

}

@property (nonatomic,readonly) BOOL isCompactWatch; 
@property (assign,nonatomic) BOOL hideDoneLabel;                                //@synthesize hideDoneLabel=_hideDoneLabel - In the implementation block
@property (nonatomic,readonly) CGPoint watchScreenCenter; 
@property (nonatomic,readonly) CGRect watchScreenFrame; 
@property (nonatomic,readonly) CGRect cardFrame; 
@property (nonatomic,readonly) double watchDeviceImageScaleFactor; 
+(id)_bridgeHeroImage;
+(id)watchDeviceImage;
-(CGSize)imageSize;
-(CGSize)_heroWatchImageSize;
-(id)_resizeImage:(id)arg1 toSize:(CGSize)arg2 ;
-(double)watchDeviceImageScaleFactor;
-(CGSize)_watchScreenSize:(double)arg1 ;
-(CGPoint)_watchScreenInset;
-(CGRect)cardFrame;
-(CGRect)spaceBelowCardFrame;
-(void)setHideDoneLabel:(BOOL)arg1 ;
-(BOOL)hideDoneLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGRect)watchScreenFrame;
-(CGPoint)watchScreenCenter;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isCompactWatch;
@end

