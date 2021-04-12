/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSource.h>

@class NSXPCConnection, NSDate, NSString;

@interface MTXPCClientInfo : NSObject <MTSource> {

	NSXPCConnection* _connection;
	id _clientLink;
	NSDate* _connectedDate;

}

@property (nonatomic,retain) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id clientLink;                              //@synthesize clientLink=_clientLink - In the implementation block
@property (nonatomic,retain) NSDate * connectedDate;                     //@synthesize connectedDate=_connectedDate - In the implementation block
@property (nonatomic,readonly) int processID; 
@property (nonatomic,copy,readonly) NSString * processName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInfoForConnection:(id)arg1 clientLink:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)processName;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)sourceIdentifier;
-(int)processID;
-(NSDate *)connectedDate;
-(BOOL)donatesIntent;
-(id)clientLink;
-(id)initWithConnection:(id)arg1 clientLink:(id)arg2 ;
-(void)setClientLink:(id)arg1 ;
-(void)setConnectedDate:(NSDate *)arg1 ;
@end

