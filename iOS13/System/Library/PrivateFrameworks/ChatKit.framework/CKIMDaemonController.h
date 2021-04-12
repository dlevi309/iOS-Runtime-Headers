/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <IMCore/IMDaemonController.h>

@class NSArray;

@interface CKIMDaemonController : IMDaemonController {

	NSArray* _listeners;

}

@property (nonatomic,retain) NSArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
+(id)sharedInstance;
+(void)beginSimulatingDaemon;
-(NSArray *)listeners;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(void)setListeners:(NSArray *)arg1 ;
-(void)sendBalloonPayload:(id)arg1 attachments:(id)arg2 withMessageGUID:(id)arg3 bundleID:(id)arg4 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(BOOL)arg3 ;
@end

