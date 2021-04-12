/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <libobjc.A.dylib/LSInstallProgressProtocol.h>

@class NSXPCConnection, NSString;

@interface LSInstallProgressObserver : NSObject <LSInstallProgressProtocol> {

	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(void)_lsPing:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)removeObserver;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(unsigned long long)hash;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)sendNotification:(int)arg1 forApplications:(id)arg2 withPlugins:(BOOL)arg3 ;
-(void)addObserver;
@end

