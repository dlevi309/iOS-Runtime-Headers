/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)opportuneSpeakListener:(id)arg1 hasRemoteVADAvailable:(BOOL)arg2 ;
-(void)start;
-(void)opportuneSpeakListener:(id)arg1 hasVADAvailable:(BOOL)arg2 ;
-(void)receiveOpportuneSpeakListenerStop;
-(void)receiveOpportuneSpeakListenerStart;
-(void)opportuneSpeakListener:(id)arg1 didStopUnexpectly:(BOOL)arg2 ;
@end

