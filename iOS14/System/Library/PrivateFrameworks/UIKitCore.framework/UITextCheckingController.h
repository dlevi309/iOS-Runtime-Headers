/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextCheckingClient;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextChecker;

@interface UITextCheckingController : NSObject {

	id<UITextCheckingClient> _client;
	UITextChecker* _textChecker;
	NSRange _selectedRangeFromPreviousUnchecked;
	struct {
		unsigned respondsToAutocorrectionType : 1;
		unsigned respondsToSpellCheckingType : 1;
		unsigned respondsToSmartQuotesType : 1;
		unsigned respondsToSmartDashesType : 1;
		unsigned respondsToSmartInsertDeleteType : 1;
		unsigned respondsToContinuousSpellCheckingEnabled : 1;
	}  _tccClientFlags;

}

@property (readonly) id<UITextCheckingClient> client; 
-(id<UITextCheckingClient>)client;
-(void)didChangeSelectionFromRange:(id)arg1 ;
-(void)removeSpellingMarkersFromWordInRange:(id)arg1 ;
-(BOOL)foundApostropheAfterRange:(NSRange)arg1 ;
-(id)validAnnotations;
-(void)considerTextCheckingForRange:(id)arg1 ;
-(NSRange)selectedRange;
-(void)insertedTextInRange:(id)arg1 ;
-(void)checkSpellingForSelectionChangeFromRange:(NSRange)arg1 ;
-(NSRange)nsRangeForTextRange:(id)arg1 ;
-(id)keyboardLanguages;
-(void)invalidate;
-(id)textChecker;
-(BOOL)continuousSpellCheckingEnabled;
-(void)didChangeTextInRange:(id)arg1 ;
-(void)checkSpellingForWordInRange:(id)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)preheatTextChecker;
-(void)dealloc;
@end

