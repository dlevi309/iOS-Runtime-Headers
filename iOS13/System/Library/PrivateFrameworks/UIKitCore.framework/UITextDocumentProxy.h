/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2;
-(NSString *)selectedText;
-(UITextInputMode *)documentInputMode;
-(NSUUID *)documentIdentifier;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1;
-(NSString *)documentContextBeforeInput;
-(NSString *)documentContextAfterInput;

@end

