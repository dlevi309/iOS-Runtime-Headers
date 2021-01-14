/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@class ACAccount;

@interface ICQRequestProvider : NSObject {

	ACAccount* _account;

}
+(BOOL)attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2 ;
+(void)addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2 ;
+(id)stringTimeOfLastBackup;
-(id)initWithAccount:(id)arg1 ;
-(void)addCommonHeadersToRequest:(id)arg1 ;
-(id)urlForQuotaKey:(id)arg1 ;
@end

