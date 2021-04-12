/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary;

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {

	NSMutableDictionary* _uuidCoalitionNameMap;

}
-(id)init;
-(void)_uuidCoalitionNameMapPrune;
-(BOOL)noteUUID:(id)arg1 forPid:(int)arg2 ;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
@end

