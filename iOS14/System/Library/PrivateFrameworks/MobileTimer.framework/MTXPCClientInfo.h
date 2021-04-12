/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)processID;
-(NSDate *)connectedDate;
-(NSString *)processName;
-(id)initWithConnection:(id)arg1 clientLink:(id)arg2 ;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(unsigned long long)hash;
-(void)setClientLink:(id)arg1 ;
-(id)clientLink;
-(BOOL)donatesIntent;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setConnectedDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)sourceIdentifier;
@end

