/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/

#import <libobjc.A.dylib/TSClockClient.h>

@protocol OS_dispatch_queue;
@class NSObject, TSClock, NSString;

@interface TSClockInterface : NSObject <TSClockClient> {

	NSObject*<OS_dispatch_queue> _notificationsQueue;
	/*function pointer*/void* _lockStateCallback;
	void* _lockStateRefcon;
	/*function pointer*/void* _masterChangeCallback;
	void* _masterChangeRefcon;
	/*function pointer*/void* _gptpGrandmasterCallback;
	void* _gptpGrandmasterRefcon;
	/*function pointer*/void* _gptpGrandmasterPortCallback;
	void* _gptpGrandmasterPortRefcon;
	/*function pointer*/void* _gptpLocalPortCallback;
	void* _gptpLocalPortRefcon;
	TSClock* _clock;

}

@property (nonatomic,retain) TSClock * clock;                       //@synthesize clock=_clock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSClock *)clock;
-(void)setgPTPGrandmasterNotificationCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
-(void)setClock:(TSClock *)arg1 ;
-(id)initWithClockIdentifier:(unsigned long long)arg1 ;
-(void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3 ;
-(void)setLockStateNotificationCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
-(void)didChangeLockStateTo:(int)arg1 forClock:(id)arg2 ;
-(void)setgPTPLocalPortNotificationCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
-(void)setgPTPGrandmasterIDAndPortNotificationCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
-(void)setMasterChangeNotificationCallback:(/*function pointer*/void*)arg1 refcon:(void*)arg2 ;
-(void)didChangeClockMasterForClock:(id)arg1 ;
-(void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(id)arg3 ;
-(void)didEndClockGrandmasterChangeForClock:(id)arg1 ;
@end

