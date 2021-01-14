/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthStoreEndpoint.h>

@class NSError;

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)remote_serverForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSError *)error;
-(id)initWithClient:(id)arg1 daemon:(id)arg2 error:(id)arg3 ;
@end

