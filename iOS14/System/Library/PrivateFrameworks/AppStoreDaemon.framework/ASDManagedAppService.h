/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <libobjc.A.dylib/ASDServiceProvider.h>

@class ASDServiceBroker, NSString;

@interface ASDManagedAppService : NSObject <ASDServiceProvider> {

	ASDServiceBroker* _serviceBroker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interface;
+(id)defaultService;
-(id)init;
-(void)requestStatusWithResultHandler:(/*^block*/id)arg1 ;
-(id)showVPPInviteForCurrentUser:(id)arg1 orgName:(id)arg2 ;
-(void)submitManifestRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)submitVPPRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
@end

