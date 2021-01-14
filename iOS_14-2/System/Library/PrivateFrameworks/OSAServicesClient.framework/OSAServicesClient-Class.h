/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAServicesClient.framework/OSAServicesClient
*/


@protocol OTAAgentServices;
#import <OSAServicesClient/OSAServicesClient-Structs.h>
@class NSXPCConnection;

@interface OSAServicesClient : NSObject {

	NSXPCConnection* _connection;
	id<OTAAgentServices> _synchRemoteObjectProxy;

}
+(id)sharedClient;
-(id)init;
-(id)awdKey;
-(unsigned)uidForUser:(id)arg1 ;
-(BOOL)setPreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 toValue:(void*)arg4 ;
-(id)queryKey:(CFStringRef)arg1 ;
-(BOOL)deletePreference:(id)arg1 forUser:(id)arg2 inDomain:(id)arg3 ;
-(void)dealloc;
-(id)crashreporterKey;
@end

