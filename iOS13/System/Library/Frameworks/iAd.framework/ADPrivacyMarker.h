/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)localizedAdMarkerText;
+(id)bundleForLocalizedString;
+(id)deviceContentSize;
+(id)dimensionsForVideoMarker;
+(id)localizedLearnMoreText;
-(id)init;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(BOOL)isVideo;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)resetBannerMarkerForVideoMarker;
-(void)setConstraintHeight:(NSLayoutConstraint *)arg1 ;
-(void)setConstraintWidth:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)constraintHeight;
-(NSLayoutConstraint *)constraintWidth;
-(void)updateAdMarkerSpec;
-(void)updateBackgroundAndTintColor;
-(void)renderMarkerForBannerForCategory:(id)arg1 andLanguage:(BOOL)arg2 ;
@end

