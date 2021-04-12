/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)createPermanent;
-(void)handlePermanentCreated;
-(void)createHelperConnection;
-(void)moveCallsFromTempDatabase;
-(BOOL)willMoveCallsFromTempDatabase;
-(NSXPCConnection *)helperConnection;
-(BOOL)validatePermDatabase;
-(id)syncHelperReadyNotificationRef;
-(void)setHelperConnection:(NSXPCConnection *)arg1 ;
-(BOOL)validateTempDatabase;
-(id)tempDBLocation:(unsigned char*)arg1 ;
-(id)permDBLocation:(unsigned char*)arg1 ;
-(void)setSyncHelperReadyNotificationRef:(id)arg1 ;
-(void)createTemporary;
-(void)pokeSyncHelperToInitDB;
@end

