/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@class NSString, NSXPCConnection;

@interface ANPlaybackSessionClient : NSObject {

	NSString* _sessionID;
	NSXPCConnection* _connection;
	NSString* _groupID;

}

@property (nonatomic,retain) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * groupID;                        //@synthesize groupID=_groupID - In the implementation block
+(id)clientWithXPCConnection:(id)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(id)description;
-(id)copy;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

