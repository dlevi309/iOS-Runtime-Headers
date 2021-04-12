/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)crashreporterKey;
-(id)awdKey;
-(unsigned)uidForUser:(id)arg1 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
@end

