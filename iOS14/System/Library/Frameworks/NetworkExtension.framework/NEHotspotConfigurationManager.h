/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

