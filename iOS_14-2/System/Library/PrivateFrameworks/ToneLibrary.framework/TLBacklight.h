/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)_assertNotRunningOnAccessQueue;
-(void)removeObserver:(id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)dealloc;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_notifyObservers:(id)arg1 ofUpdatedBacklightStatus:(long long)arg2 ;
-(void)_setObservingBacklight:(BOOL)arg1 ;
-(long long)backlightStatus;
-(void)_setBacklightStatus:(long long)arg1 ;
@end

