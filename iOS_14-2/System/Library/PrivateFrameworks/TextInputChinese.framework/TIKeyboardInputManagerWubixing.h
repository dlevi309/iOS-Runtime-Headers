/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputChinese/TIKeyboardInputManagerShapeBased.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion> {

	TIKeyboardCandidate* _autoConfirmationCandidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * autoConfirmationCandidate;              //@synthesize autoConfirmationCandidate=_autoConfirmationCandidate - In the implementation block
+(Class)wordSearchClass;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(unsigned)inputIndex;
-(id)keyboardBehaviors;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)sortingMethods;
-(int)inputMethodType;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(TIKeyboardCandidate *)autoConfirmationCandidate;
-(void)setAutoConfirmationCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)updateMarkedText;
-(BOOL)isValidWubiInput:(id)arg1 ;
@end

