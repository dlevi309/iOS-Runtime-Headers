/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/

#import <SymptomNetworkUsage/NWEntityMapper.h>

@class NSMutableDictionary, NSString;

@interface NWEntityMapperProcessWatcher : NWEntityMapper {

	NSMutableDictionary* _uuidProcessNameMap;
	NSString* _niluuidProcessName;

}
-(void)noteUUID:(id)arg1 forProcessName:(id)arg2 ;
-(id)init;
-(id)stateDictionary;
-(id)identifierForUUID:(id)arg1 derivation:(int*)arg2 ;
-(void)_uuidProcessNameMapPrune;
@end

