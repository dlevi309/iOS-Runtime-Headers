/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable;

@interface TLBacklight : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSHashTable* _observers;
	BOOL _isObservingBacklight;
	long long _backlightStatus;

}

@property (readonly) long long backlightStatus; 
+(id)sharedBacklight;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_assertNotRunningOnAccessQueue;
-(void)_notifyObservers:(id)arg1 ofUpdatedBacklightStatus:(long long)arg2 ;
-(void)_setObservingBacklight:(BOOL)arg1 ;
-(long long)backlightStatus;
-(void)_setBacklightStatus:(long long)arg1 ;
@end

