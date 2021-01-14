/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface CKIMDaemonController : IMDaemonController {

	NSArray* _listeners;

}

@property (nonatomic,retain) NSArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
+(void)beginSimulatingDaemon;
+(id)sharedInstance;
-(NSArray *)listeners;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(void)setListeners:(NSArray *)arg1 ;
-(void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(BOOL)arg3 ;
@end

