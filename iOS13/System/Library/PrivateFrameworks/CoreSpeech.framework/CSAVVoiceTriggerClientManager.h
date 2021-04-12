/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSAudioServerCrashMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface CSAVVoiceTriggerClientManager : NSObject <CSAudioServerCrashMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingBargeInClients;
	NSMutableArray* _pendingDisableBargeInClients;
	NSMutableArray* _bargeInClients;

}

@property (nonatomic,retain) NSMutableArray * pendingBargeInClients;                     //@synthesize pendingBargeInClients=_pendingBargeInClients - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingDisableBargeInClients;              //@synthesize pendingDisableBargeInClients=_pendingDisableBargeInClients - In the implementation block
@property (nonatomic,retain) NSMutableArray * bargeInClients;                            //@synthesize bargeInClients=_bargeInClients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedVoiceTriggerClient;
-(id)init;
-(void)reset;
-(void)_reset;
-(void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1 ;
-(void)_willEnableBargeInWithClientName:(id)arg1 ;
-(void)_willDisableBargeInWithClientName:(id)arg1 ;
-(void)_enableBargeInModeWithClientName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_disableBargeInModeWithClientName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)willEnableBargeInMode:(BOOL)arg1 clientName:(id)arg2 ;
-(void)enableBargeInMode:(BOOL)arg1 clientName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)pendingBargeInClients;
-(void)setPendingBargeInClients:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pendingDisableBargeInClients;
-(void)setPendingDisableBargeInClients:(NSMutableArray *)arg1 ;
-(NSMutableArray *)bargeInClients;
-(void)setBargeInClients:(NSMutableArray *)arg1 ;
@end

