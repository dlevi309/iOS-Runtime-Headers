/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UITextFieldViewBackgroundProvider.h>
#import <UIKitCore/_UITextFieldMetricsProvider.h>

@class NSString;

@interface _UITextFieldTVBackgroundProvider : _UITextFieldViewBackgroundProvider <_UITextFieldMetricsProvider>

@property (nonatomic,readonly) BOOL shouldExtendCaretHeight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)backgroundView;
-(CGRect)contentFrameForBounds:(CGRect)arg1 ;
-(CGSize)intrinsicSizeForContentSize:(CGSize)arg1 ;
-(BOOL)shouldExtendCaretHeight;
-(id)preferredMetricsProvider;
-(long long)associatedBorderStyle;
@end

