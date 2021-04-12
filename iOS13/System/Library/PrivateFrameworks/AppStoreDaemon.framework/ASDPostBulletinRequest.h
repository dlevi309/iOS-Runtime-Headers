/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/ASDEphemeralRequest.h>

@class ASDPostBulletinRequestOptions;

@interface ASDPostBulletinRequest : ASDEphemeralRequest

@property (nonatomic,copy,readonly) ASDPostBulletinRequestOptions * options; 
+(long long)requestType;
-(id)initWithOptions:(id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end

