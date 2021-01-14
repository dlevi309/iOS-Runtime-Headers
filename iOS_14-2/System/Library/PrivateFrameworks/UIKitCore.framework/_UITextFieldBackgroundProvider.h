/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITextField;

@interface _UITextFieldBackgroundProvider : NSObject {

	UITextField* _textField;

}

@property (nonatomic,__weak,readonly) UITextField * textField; 
@property (nonatomic,readonly) long long associatedBorderStyle; 
@property (nonatomic,readonly) BOOL drawsContent; 
-(BOOL)_isTV;
-(void)setNeedsDisplay;
-(void)encodeWithCoder:(id)arg1 ;
-(void)layoutIfNeeded;
-(id)description;
-(unsigned long long)hash;
-(BOOL)drawsContent;
-(UITextField *)textField;
-(void)enabledDidChangeAnimated:(BOOL)arg1 ;
-(id)preferredMetricsProvider;
-(BOOL)hitTestView:(id)arg1 ;
-(void)_buildDescription:(id)arg1 ;
-(void)removeFromTextField;
-(id)overridingSetBackgroundColor:(id)arg1 ;
-(id)overridingGetBackgroundColor;
-(void)addToTextField:(id)arg1 ;
-(long long)associatedBorderStyle;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didChangeFirstResponder;
-(void)populateArchivedSubviews:(id)arg1 ;
-(id)focusRingPathForBounds:(CGRect)arg1 ;
-(void)decodeWithCoder:(id)arg1 ;
-(void)highlightedDidChangeAnimated:(BOOL)arg1 ;
-(void)borderStyleDidChange:(BOOL)arg1 ;
-(void)selectedDidChangeAnimated:(BOOL)arg1 ;
-(void)controlSizeDidChange:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

