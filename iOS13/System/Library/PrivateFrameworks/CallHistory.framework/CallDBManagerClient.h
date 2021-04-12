/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

@interface CallDBManagerClient : CallDBManager {

	NSXPCConnection* _helperConnection;
	id _syncHelperReadyNotificationRef;

}

@property (retain) NSXPCConnection * helperConnection;              //@synthesize helperConnection=_helperConnection - In the implementation block
@property (retain) id syncHelperReadyNotificationRef;               //@synthesize syncHelperReadyNotificationRef=_syncHelperReadyNotificationRef - In the implementation block
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(void)handlePermanentCreated;
-(NSXPCConnection *)helperConnection;
-(void)setHelperConnection:(NSXPCConnection *)arg1 ;
-(void)moveCallsFromTempDatabase;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)pokeSyncHelperToInitDB;
-(BOOL)willMoveCallsFromTempDatabase;
-(void)createHelperConnection;
-(BOOL)validatePermDatabase;
-(void)createPermanent;
-(void)createTemporary;
-(BOOL)validateTempDatabase;
-(id)syncHelperReadyNotificationRef;
-(void)setSyncHelperReadyNotificationRef:(id)arg1 ;
@end

