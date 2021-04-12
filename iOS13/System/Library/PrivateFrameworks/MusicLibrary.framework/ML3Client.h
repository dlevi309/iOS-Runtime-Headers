/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class NSXPCConnection, NSString;

@interface ML3Client : NSObject {

	int _processID;
	NSXPCConnection* _connection;
	NSString* _bundleID;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int processID;                                        //@synthesize processID=_processID - In the implementation block
@property (getter=isDaemonClient,nonatomic,readonly) BOOL daemonClient; 
+(id)daemonClient;
+(id)processClient;
-(id)init;
-(id)description;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
-(id)initWithConnection:(id)arg1 ;
-(int)processID;
-(BOOL)isDaemonClient;
@end

