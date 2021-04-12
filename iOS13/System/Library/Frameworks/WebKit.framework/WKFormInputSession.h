/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKFormInputSession.h>

@class NSString, UIView, NSArray;

@interface WKFormInputSession : NSObject <_WKFormInputSession> {

	WeakObjCPtr<WKContentView> _contentView;
	RetainPtr<WKFocusedElementInfo>* _focusedElementInfo;
	RetainPtr<UIView>* _customInputView;
	RetainPtr<UIView>* _customInputAccessoryView;
	RetainPtr<NSArray<UITextSuggestion *> >* _suggestions;
	BOOL _accessoryViewShouldNotShow;
	BOOL _forceSecureTextEntry;
	BOOL _requiresStrongPasswordAssistance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(void)invalidate;
-(void)endEditing;
-(BOOL)isValid;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSObject*<NSSecureCoding>)userObject;
-(void)reloadFocusedElementContextView;
-(id<_WKFocusedElementInfo>)focusedElementInfo;
-(NSString *)accessoryViewCustomButtonTitle;
-(void)setAccessoryViewCustomButtonTitle:(NSString *)arg1 ;
-(UIView *)customInputView;
-(void)setCustomInputView:(UIView *)arg1 ;
-(UIView *)customInputAccessoryView;
-(void)setCustomInputAccessoryView:(UIView *)arg1 ;
-(BOOL)accessoryViewShouldNotShow;
-(void)setAccessoryViewShouldNotShow:(BOOL)arg1 ;
-(BOOL)forceSecureTextEntry;
-(void)setForceSecureTextEntry:(BOOL)arg1 ;
-(BOOL)requiresStrongPasswordAssistance;
-(id)initWithContentView:(id)arg1 focusedElementInfo:(id)arg2 requiresStrongPasswordAssistance:(BOOL)arg3 ;
@end

