/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITextFieldViewBackgroundProvider.h>

@class UITextFieldBackgroundView;

@interface _UITextFieldSystemBackgroundProvider : _UITextFieldViewBackgroundProvider {

	UITextFieldBackgroundView* _systemBackgroundView;

}
+(id)systemStyleMetricsProvider;
-(id)backgroundView;
-(void)setProgress:(double)arg1 ;
-(void)enabledDidChangeAnimated:(BOOL)arg1 ;
-(id)preferredMetricsProvider;
-(void)_buildDescription:(id)arg1 ;
-(Class)systemBackgroundViewClass;
-(void)removeFromTextField;
-(id)overridingSetBackgroundColor:(id)arg1 ;
-(id)overridingGetBackgroundColor;
-(void)addToTextField:(id)arg1 ;
-(long long)associatedBorderStyle;
@end

