/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGPeopleInferencesConveniences : NSObject
+(BOOL)isValidContact:(id)arg1 ;
+(BOOL)signalInRunOptions:(unsigned long long)arg1 signal:(unsigned long long)arg2 ;
+(id)momentNodesLinkedToPersonNodes:(id)arg1 ;
+(id)personLocalIdentifierByContactIdentifierFromPersonNodes:(id)arg1 ;
+(id)personCountedSetFromMomentNodes:(id)arg1 amongPersonNodes:(id)arg2 ;
+(id)momentNodesbyAddressNodeFromMomentNodes:(id)arg1 ;
+(id)momentsAtWorkForMomentNodes:(id)arg1 ;
+(id)momentsAtHomeForMomentNodes:(id)arg1 ;
+(id)_momentsAtHomeOrWorkForMomentNodes:(id)arg1 atHome:(BOOL)arg2 atWork:(BOOL)arg3 ;
+(id)topPersonLocalIdentifierFor2PersonSocialGroupsInGraph:(id)arg1 personNodes:(id)arg2 ;
+(id)possibleUserLocalesFromGraph:(id)arg1 ;
@end

