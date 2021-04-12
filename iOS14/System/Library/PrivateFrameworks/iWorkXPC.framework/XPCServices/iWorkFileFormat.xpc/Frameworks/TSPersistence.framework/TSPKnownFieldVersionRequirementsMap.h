/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


#import <TSPersistence/TSPersistence-Structs.h>
@interface TSPKnownFieldVersionRequirementsMap : NSObject {

	unique_ptr<std::__1::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements> > >, std::__1::default_delete<std::__1::unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements> > > > >* _map;

}
+(id)newKnownFieldVersionRequirementsMapForMessage:(const Message*)arg1 knownFieldRuleProvider:(id)arg2 ;
+(unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements> > >*)updateMap:(unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements> > >*)arg1 message:(const Message*)arg2 byAddingRulesFromKnownFieldRuleProvider:(id)arg3 ;
-(id)init;
-(id)initWithMap:(unordered_map<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements, TSP::FieldPathHash, TSP::FieldPathEqualTo, std::__1::allocator<std::__1::pair<const TSP::FieldPath, TSP::FieldInfoRuleAttributesForVersionRequirements> > >*)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)addRulesFromKnownFieldRuleProvider:(id)arg1 ;
@end

