/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImageView, CACAdaptiveBackdropView, UILabel;

@interface CACLabeledBadgeView : UIView {

	BOOL _isContrastBackdrop;
	NSString* _label;
	long long _arrowOrientation;
	long long _badgePresentation;
	UIImageView* _badgeMaskImageView;
	CACAdaptiveBackdropView* __backdropView;
	UILabel* __labelView;

}

@property (nonatomic,retain) UIImageView * badgeMaskImageView;                     //@synthesize badgeMaskImageView=_badgeMaskImageView - In the implementation block
@property (nonatomic,retain) CACAdaptiveBackdropView * _backdropView;              //@synthesize _backdropView=__backdropView - In the implementation block
@property (nonatomic,retain) UILabel * _labelView;                                 //@synthesize _labelView=__labelView - In the implementation block
@property (assign,nonatomic) BOOL isContrastBackdrop;                              //@synthesize isContrastBackdrop=_isContrastBackdrop - In the implementation block
@property (readonly) NSString * label;                                             //@synthesize label=_label - In the implementation block
@property (readonly) long long arrowOrientation;                                   //@synthesize arrowOrientation=_arrowOrientation - In the implementation block
@property (readonly) long long badgePresentation;                                  //@synthesize badgePresentation=_badgePresentation - In the implementation block
+(id)imageBundle;
+(CGSize)sizeOfBadgeGivenNumberOfDisplayedDigits:(long long)arg1 arrowOrientation:(long long)arg2 badgePresentation:(long long)arg3 ;
+(id)_badgeFont;
+(id)_badgeFontTextStyle;
+(id)_badgeImageWithNoArrowAndBorder;
+(id)_badgeImageWithNoArrow;
+(id)_badgeImageWithRightArrow;
+(id)_badgeImageWithTinyRightArrow;
+(id)_maskImageForBadgePresentation:(long long)arg1 arrowOrientation:(long long)arg2 ;
+(double)_heightForBadgeWithText;
+(double)badgeFontSize;
-(id)copy;
-(NSString *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CACAdaptiveBackdropView *)_backdropView;
-(UILabel *)_labelView;
-(void)_setUpSubviews;
-(long long)arrowOrientation;
-(long long)badgePresentation;
-(id)initWithFrame:(CGRect)arg1 label:(id)arg2 arrowOrientation:(long long)arg3 badgePresentation:(long long)arg4 ;
-(id)contrastedCopy;
-(id)_initWithFrame:(CGRect)arg1 label:(id)arg2 arrowOrientation:(long long)arg3 badgePresentation:(long long)arg4 isContrasted:(BOOL)arg5 ;
-(BOOL)isContrastBackdrop;
-(void)setBadgeMaskImageView:(UIImageView *)arg1 ;
-(UIImageView *)badgeMaskImageView;
-(void)set_backdropView:(CACAdaptiveBackdropView *)arg1 ;
-(void)set_labelView:(UILabel *)arg1 ;
-(void)setIsContrastBackdrop:(BOOL)arg1 ;
@end

