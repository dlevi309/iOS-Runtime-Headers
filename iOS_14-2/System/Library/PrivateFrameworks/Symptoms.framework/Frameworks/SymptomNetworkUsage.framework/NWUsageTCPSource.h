/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/SymptomNetworkUsage-Structs.h>
#import <SymptomNetworkUsage/NWUsageSource.h>

@class NSDictionary;

@interface NWUsageTCPSource : NWUsageSource {

	updater_nstat_msg_src_update_tcp _nstatTCPUpdate;
	NSDictionary* _lookupResults;

}
-(id)createSnapshot:(int)arg1 ;
-(void)deriveAttribution:(id)arg1 ;
-(BOOL)updateWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(id)initWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
@end

