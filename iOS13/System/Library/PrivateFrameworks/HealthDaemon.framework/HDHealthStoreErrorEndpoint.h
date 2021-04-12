/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthStoreEndpoint.h>

@class NSError;

@interface HDHealthStoreErrorEndpoint : HDHealthStoreEndpoint {

	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)remote_serverForConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithClient:(id)arg1 daemon:(id)arg2 error:(id)arg3 ;
@end

