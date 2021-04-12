/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HKExtendedServerInterface.h>
#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol OS_dispatch_queue;
@class NSObject, HDXPCClient, HDProfile, NSString;

@interface HDHealthExtensionsServer : NSObject <HDDiagnosticObject, HKExtendedServerInterface, _HKXPCExportable> {

	NSObject*<OS_dispatch_queue> _queue;
	HDXPCClient* _client;
	HDProfile* _profile;

}

@property (nonatomic,retain) HDXPCClient * client;                              //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) HDProfile * profile;                               //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverWithClient:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)_shouldAcceptConnectionForClient:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(HDXPCClient *)client;
-(void)setClient:(HDXPCClient *)arg1 ;
-(id)exportedInterface;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(void)remote_setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)diagnosticDescription;
-(id)initWithClient:(id)arg1 profile:(id)arg2 ;
@end

