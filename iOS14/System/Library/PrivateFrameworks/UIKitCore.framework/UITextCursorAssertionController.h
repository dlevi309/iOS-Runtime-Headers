/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITextCursorAssertionControllerSubject;
@class NSHashTable;

@interface UITextCursorAssertionController : NSObject {

	NSHashTable* _assertions;
	id<UITextCursorAssertionControllerSubject> _subject;

}

@property (assign,nonatomic,__weak) id<UITextCursorAssertionControllerSubject> subject;              //@synthesize subject=_subject - In the implementation block
-(id<UITextCursorAssertionControllerSubject>)subject;
-(id)nonBlinkingAssertionWithReason:(id)arg1 ;
-(id)_createAssertionWithReason:(id)arg1 options:(unsigned long long)arg2 ;
-(id)debugDescription;
-(id)nonBlinkingGhostAssertionWithReason:(id)arg1 ;
-(void)_updateSubjectWithAssertionState;
-(void)_endTrackingAssertion:(id)arg1 ;
-(id)nonVisibleAssertionWithReason:(id)arg1 ;
-(void)_beginTrackingAssertion:(id)arg1 ;
-(void)setSubject:(id<UITextCursorAssertionControllerSubject>)arg1 ;
-(void)dealloc;
@end

