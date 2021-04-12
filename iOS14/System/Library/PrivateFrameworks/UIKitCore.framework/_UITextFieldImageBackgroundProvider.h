/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITextFieldViewBackgroundProvider.h>

@class _UITextFieldImageBackgroundView;

@interface _UITextFieldImageBackgroundProvider : _UITextFieldViewBackgroundProvider {

	_UITextFieldImageBackgroundView* _backgroundView;

}
-(id)backgroundView;
-(void)setNeedsDisplay;
-(void)layoutIfNeeded;
-(void)_applyCorrectImage;
-(void)enabledDidChangeAnimated:(BOOL)arg1 ;
-(void)addToTextField:(id)arg1 ;
@end

