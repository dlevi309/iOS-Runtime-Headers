/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)updateWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(id)initWithUpdate:(nstat_msg_src_update_convenient*)arg1 monitor:(id)arg2 ;
-(void)deriveAttribution:(id)arg1 ;
@end

