/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSData, NSObject, NSString;

@interface ApplePushNotificationHandler : NSObject <APSConnectionDelegate> {

	BOOL _apsEnabled;
	BOOL _apsDevEnvironment;
	APSConnection* _apsConnection;
	NSData* _apsToken;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                     //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,readonly) NSData * apsToken;                               //@synthesize apsToken=_apsToken - In the implementation block
@property (nonatomic,readonly) BOOL apsEnabled;                                 //@synthesize apsEnabled=_apsEnabled - In the implementation block
@property (nonatomic,readonly) BOOL apsDevEnvironment;                          //@synthesize apsDevEnvironment=_apsDevEnvironment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)deactivate;
+(void)activate;
+(unsigned long long)currentEnvironment;
+(BOOL)apnsEnabled;
+(id)apnsTokenString;
+(BOOL)shouldEnableAPNS;
+(id)stringFromData:(id)arg1 ;
-(NSData *)apsToken;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)connectionDidReconnect:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3 ;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2 ;
-(APSConnection *)apsConnection;
-(void)dealloc;
-(BOOL)apsEnabled;
-(void)_createApsConnection;
-(void)_shutdownApsConnection;
-(BOOL)apsDevEnvironment;
-(void)_parseUserInfo:(id)arg1 apnsIdentifier:(unsigned long long)arg2 ;
-(void)_parseAPSIncomingMessage:(id)arg1 ;
@end

