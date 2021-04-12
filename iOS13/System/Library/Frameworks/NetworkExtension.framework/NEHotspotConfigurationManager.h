/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@interface NEHotspotConfigurationManager : NSObject
+(id)sharedManager;
-(id)errorWithCode:(long long)arg1 ;
-(id)serializeConfiguration:(id)arg1 ;
-(void)applyConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeConfigurationForSSID:(id)arg1 ;
-(void)removeConfigurationForHS20DomainName:(id)arg1 ;
-(void)getConfiguredSSIDsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

