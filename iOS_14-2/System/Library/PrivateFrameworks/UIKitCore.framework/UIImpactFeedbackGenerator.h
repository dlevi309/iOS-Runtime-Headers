/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator {

	long long _style;

}

@property (getter=_impactConfiguration,nonatomic,readonly) _UIImpactFeedbackGeneratorConfiguration * impactConfiguration; 
+(Class)_configurationClass;
-(id)_stats_key;
-(id)_ui_descriptionBuilder;
-(id)_styleString;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2 ;
-(void)impactOccurred;
-(id)_impactConfiguration;
-(void)_impactOccurredWithIntensity:(double)arg1 ;
-(void)impactOccurredWithIntensity:(double)arg1 ;
@end

