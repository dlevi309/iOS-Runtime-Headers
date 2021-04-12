/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString, UITextInputMode, NSUUID;


@protocol UITextDocumentProxy <UIKeyInput>
@property (nonatomic,readonly) NSString * documentContextBeforeInput; 
@property (nonatomic,readonly) NSString * documentContextAfterInput; 
@property (nonatomic,readonly) NSString * selectedText; 
@property (nonatomic,readonly) UITextInputMode * documentInputMode; 
@property (nonatomic,copy,readonly) NSUUID * documentIdentifier; 
@required
-(void)unmarkText;
-(NSString *)selectedText;
-(UITextInputMode *)documentInputMode;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(NSUUID *)documentIdentifier;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1;
-(NSString *)documentContextBeforeInput;
-(NSString *)documentContextAfterInput;

@end

