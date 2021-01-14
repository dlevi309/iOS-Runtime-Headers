/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithConnection:(id)arg1 description:(id)arg2 ;
-(NSString *)loggingDescription;
-(EMRemoteConnection *)connection;
-(id)_newRemoteBoost;
-(void)setRemoteBoost:(NSProgress *)arg1 ;
-(void)setLoggingDescription:(NSString *)arg1 ;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(NSProgress *)remoteBoost;
-(void)dealloc;
@end

