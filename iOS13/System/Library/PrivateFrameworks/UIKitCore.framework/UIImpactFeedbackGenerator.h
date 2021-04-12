/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator {

	long long _style;

}

@property (getter=_impactConfiguration,nonatomic,readonly) _UIImpactFeedbackGeneratorConfiguration * impactConfiguration; 
+(Class)_configurationClass;
-(id)initWithStyle:(long long)arg1 ;
-(void)_impactOccurredWithIntensity:(double)arg1 ;
-(id)_ui_descriptionBuilder;
-(id)_stats_key;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(id)_impactConfiguration;
-(id)_styleString;
-(void)impactOccurred;
-(void)impactOccurredWithIntensity:(double)arg1 ;
@end

