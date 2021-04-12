/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface IMSimulatedDaemonController : IMDaemonController {

	NSArray* _listeners;

}

@property (nonatomic,retain) NSArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
+(void)beginSimulatingDaemon;
+(id)sharedInstance;
+(id)dictionaryForChat:(id)arg1 ;
-(BOOL)isConnected;
-(NSArray *)listeners;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(void)setListeners:(NSArray *)arg1 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(BOOL)arg3 ;
@end

