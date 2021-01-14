/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)processClient;
+(id)daemonClient;
-(int)processID;
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(BOOL)isDaemonClient;
-(id)description;
-(NSXPCConnection *)connection;
-(NSString *)bundleID;
@end

