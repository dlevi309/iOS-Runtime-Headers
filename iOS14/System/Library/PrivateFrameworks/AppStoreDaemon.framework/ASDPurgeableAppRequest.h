/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDPurgeableAppRequestOptions;

@interface ASDPurgeableAppRequest : ASDEphemeralRequest

@property (nonatomic,copy,readonly) ASDPurgeableAppRequestOptions * options; 
+(long long)requestType;
-(id)initWithOptions:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

