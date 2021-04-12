/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

