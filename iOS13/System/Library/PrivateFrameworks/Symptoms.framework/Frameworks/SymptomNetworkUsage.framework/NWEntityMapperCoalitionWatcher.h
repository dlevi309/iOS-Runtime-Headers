/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary;

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {

	NSMutableDictionary* _uuidCoalitionNameMap;

}
-(id)init;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
-(void)_uuidCoalitionNameMapPrune;
-(BOOL)noteUUID:(id)arg1 forPid:(int)arg2 ;
@end

