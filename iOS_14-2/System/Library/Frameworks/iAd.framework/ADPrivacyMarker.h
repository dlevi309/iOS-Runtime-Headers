/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint;

@interface ADPrivacyMarker : UIButton {

	BOOL _isVideo;
	NSLayoutConstraint* _constraintHeight;
	NSLayoutConstraint* _constraintWidth;

}

@property (assign,nonatomic) BOOL isVideo;                                       //@synthesize isVideo=_isVideo - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * constraintHeight;              //@synthesize constraintHeight=_constraintHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * constraintWidth;               //@synthesize constraintWidth=_constraintWidth - In the implementation block
+(id)localizedLearnMoreText;
+(id)bundleForLocalizedString;
+(id)dimensionsForVideoMarker;
+(id)deviceContentSize;
+(id)localizedAdMarkerText;
-(id)accessibilityLabel;
-(CGSize)intrinsicContentSize;
-(id)init;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)renderMarkerForBannerForCategory:(id)arg1 andLanguage:(BOOL)arg2 ;
-(void)resetBannerMarkerForVideoMarker;
-(BOOL)isVideo;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)updateBackgroundAndTintColor;
-(NSLayoutConstraint *)constraintHeight;
-(NSLayoutConstraint *)constraintWidth;
-(void)setConstraintWidth:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintHeight:(NSLayoutConstraint *)arg1 ;
-(void)updateAdMarkerSpec;
-(void)dealloc;
@end

