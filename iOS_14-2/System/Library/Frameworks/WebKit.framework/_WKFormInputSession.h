/*
* Generated on Thursday, January 14, 2021 at 2:21:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

@class NSString, UIView, NSArray;


@protocol _WKFormInputSession <NSObject>
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@property (nonatomic,readonly) id<_WKFocusedElementInfo> focusedElementInfo; 
@property (nonatomic,copy) NSString * accessoryViewCustomButtonTitle; 
@property (nonatomic,retain) UIView * customInputView; 
@property (nonatomic,retain) UIView * customInputAccessoryView; 
@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic) BOOL accessoryViewShouldNotShow; 
@property (assign,nonatomic) BOOL forceSecureTextEntry; 
@property (nonatomic,readonly) BOOL requiresStrongPasswordAssistance; 
@required
-(NSArray *)suggestions;
-(void)setSuggestions:(id)arg1;
-(NSObject*<NSSecureCoding>)userObject;
-(UIView *)customInputView;
-(BOOL)isValid;
-(void)reloadFocusedElementContextView;
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(NSString *)accessoryViewCustomButtonTitle;
-(void)setAccessoryViewCustomButtonTitle:(id)arg1;
-(void)setCustomInputView:(id)arg1;
-(BOOL)forceSecureTextEntry;
-(UIView *)customInputAccessoryView;
-(void)setCustomInputAccessoryView:(id)arg1;
-(BOOL)accessoryViewShouldNotShow;
-(void)setAccessoryViewShouldNotShow:(BOOL)arg1;
-(void)setForceSecureTextEntry:(BOOL)arg1;
-(BOOL)requiresStrongPasswordAssistance;

@end

