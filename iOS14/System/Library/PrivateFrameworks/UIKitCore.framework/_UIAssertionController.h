/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIAssertionControllerSubject;
@class NSMutableDictionary;

@interface _UIAssertionController : NSObject {

	NSMutableDictionary* _activeAssertionRecords;
	id<_UIAssertionControllerSubject> _subject;

}

@property (nonatomic,__weak,readonly) id<_UIAssertionControllerSubject> subject;              //@synthesize subject=_subject - In the implementation block
-(id<_UIAssertionControllerSubject>)subject;
-(id)debugDescription;
-(id)vendAssertionOfType:(unsigned long long)arg1 initialState:(BOOL)arg2 reason:(id)arg3 ;
-(void)_enforceSubjectAwarenessOfAssertionState:(BOOL)arg1 forAssertionType:(unsigned long long)arg2 ;
-(id)initWithAssertionSubject:(id)arg1 ;
-(id)vendAssertionOfType:(unsigned long long)arg1 initialState:(BOOL)arg2 ;
-(void)_endTrackingAssertion:(id)arg1 ;
-(void)_beginTrackingAssertion:(id)arg1 ;
@end

