/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSOpportuneSpeakListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CSOpportuneSpeakListener, NSString;

@interface CSOpportuneSpeakListnerTestService : NSObject <CSOpportuneSpeakListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	int _notifyToken;
	CSOpportuneSpeakListener* listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)start;
-(void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(BOOL)arg2 ;
-(void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(BOOL)arg2 ;
-(void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(BOOL)arg2 ;
-(void)receiveOpportuneSpeakListenerStart;
-(void)receiveOpportuneSpeakListenerStop;
@end

