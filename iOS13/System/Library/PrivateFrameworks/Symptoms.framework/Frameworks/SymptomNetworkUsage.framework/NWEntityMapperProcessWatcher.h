/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary, NSString;

@interface NWEntityMapperProcessWatcher : NWEntityMapper {

	NSMutableDictionary* _uuidProcessNameMap;
	NSString* _niluuidProcessName;

}
-(id)init;
-(id)stateDictionary;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
-(void)_uuidProcessNameMapPrune;
-(void)noteUUID:(id)arg1 forProcessName:(id)arg2 ;
@end

