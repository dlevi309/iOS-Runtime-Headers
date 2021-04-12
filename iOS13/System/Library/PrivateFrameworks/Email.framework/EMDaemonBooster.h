/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/EFLoggable.h>

@class EMRemoteConnection, NSString, NSProgress;

@interface EMDaemonBooster : NSObject <EFLoggable> {

	EMRemoteConnection* _connection;
	NSString* _loggingDescription;
	NSProgress* _remoteBoost;

}

@property (nonatomic,retain) EMRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) NSString * loggingDescription;                  //@synthesize loggingDescription=_loggingDescription - In the implementation block
@property (nonatomic,retain) NSProgress * remoteBoost;                     //@synthesize remoteBoost=_remoteBoost - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
-(void)dealloc;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(NSString *)loggingDescription;
-(id)initWithConnection:(id)arg1 description:(id)arg2 ;
-(id)_newRemoteBoost;
-(NSProgress *)remoteBoost;
-(void)setRemoteBoost:(NSProgress *)arg1 ;
-(void)setLoggingDescription:(NSString *)arg1 ;
@end

