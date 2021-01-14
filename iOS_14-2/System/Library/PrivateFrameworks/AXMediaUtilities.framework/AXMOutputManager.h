/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMTaskDispatcherDelegate.h>

@protocol OS_dispatch_queue;
@class AXMTaskDispatcher, AXMAudioSession, NSObject, AXMSoundComponent, AXMSpeechComponent, AXMHapticComponent, NSArray, NSString;

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate> {

	AXMTaskDispatcher* _outputRequests;
	BOOL _usesPrivateAudioSession;
	AXMAudioSession* _audioSession;
	long long _state;
	NSObject*<OS_dispatch_queue> _queue;
	AXMSoundComponent* _queue_soundComponent;
	AXMSpeechComponent* _queue_speechComponent;
	AXMHapticComponent* _queue_hapticComponent;
	NSArray* _queue_activeComponents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)disable;
-(void)interrupt:(id)arg1 ;
-(id)dispatchRequest:(id)arg1 ;
-(id)initWithComponents:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)enableWithCompletion:(/*^block*/id)arg1 ;
-(void)interruptImmediately;
-(void)interruptPolitely;
-(id)playActiveSound:(id)arg1 ;
-(void)speak:(id)arg1 ;
-(NSString *)description;
-(void)playSound:(id)arg1 ;
-(void)dispatcher:(id)arg1 handleTask:(id)arg2 ;
@end

