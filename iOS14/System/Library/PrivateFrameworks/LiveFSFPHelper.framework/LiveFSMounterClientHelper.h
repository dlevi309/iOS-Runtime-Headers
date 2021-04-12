/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
*/

#import <LiveFSFPHelper/LiveFSMounterClient.h>
#import <LiveFSFPHelper/LiveFSMounterClientHelper.h>

@protocol LiveFSMounterClientHelper
@required
-(id)LiveMounterClientHelperDestroyDomain:(id)arg1;
-(void)LiveMounterClientHelperSetProviderName:(id)arg1;

@end


@class NSString;

@interface LiveFSMounterClientHelper : NSObject <LiveFSMounterClient, LiveFSMounterClientHelper> {

	NSString* _providerName;

}

@property (retain) NSString * providerName;              //@synthesize providerName=_providerName - In the implementation block
-(void)setProviderName:(NSString *)arg1 ;
-(NSString *)providerName;
-(void)LiveMounterClientCreateDomain:(id)arg1 displayName:(id)arg2 how:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)LiveMounterClientCreateDomain:(id)arg1 displayName:(id)arg2 how:(int)arg3 storageName:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)LiveMounterClientCreateDomain:(id)arg1 how:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)LiveMounterClientCleanupDomain:(id)arg1 how:(int)arg2 reply:(/*^block*/id)arg3 ;
-(id)LiveMounterClientHelperDestroyDomain:(id)arg1 ;
-(void)LiveMounterClientHelperSetProviderName:(id)arg1 ;
@end

