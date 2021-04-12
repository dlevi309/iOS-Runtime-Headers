/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
*/


@protocol OTATaskingAgent;
@class NSXPCConnection;

@interface OTATaskingAgentClient : NSObject {

	NSXPCConnection* _connection;
	id<OTATaskingAgent> _synchRemoteObjectProxy;

}
+(id)sharedClient;
-(id)init;
-(id)awdKey;
-(unsigned)uidForUser:(id)arg1 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(id)crashreporterKey;
@end

