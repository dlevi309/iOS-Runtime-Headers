/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITextFieldBackgroundProvider.h>

@class UIView;

@interface _UITextFieldViewBackgroundProvider : _UITextFieldBackgroundProvider

@property (nonatomic,readonly) UIView * backgroundView; 
-(UIView *)backgroundView;
-(void)setNeedsDisplay;
-(void)layoutIfNeeded;
-(BOOL)hitTestView:(id)arg1 ;
-(void)_buildDescription:(id)arg1 ;
-(void)removeFromTextField;
-(id)overridingSetBackgroundColor:(id)arg1 ;
-(void)addToTextField:(id)arg1 ;
-(void)didChangeFirstResponder;
-(void)populateArchivedSubviews:(id)arg1 ;
@end

