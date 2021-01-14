/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, CAGradientLayer;

@interface SFPrivacyReportIconView : UIView {

	UIImageView* _mask;

}

@property (nonatomic,readonly) CAGradientLayer * gradientLayer; 
+(Class)layerClass;
-(void)_updateColors;
-(CAGradientLayer *)gradientLayer;
-(void)_updateSymbolConfiguration;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

