/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSNumber, NSDictionary;

@interface HMDNetworkRouterFirewallRuleICMPType : NSObject {

	unsigned char _protocol;
	NSNumber* _typeValue;
	NSDictionary* _jsonDictionary;

}

@property (nonatomic,readonly) unsigned char protocol;                           //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) NSNumber * typeValue;                             //@synthesize typeValue=_typeValue - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (nonatomic,readonly) NSDictionary * jsonDictionary;                    //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
+(id)createWithJSONDictionary:(id)arg1 ;
+(id)createListWithJSONDictionary:(id)arg1 key:(id)arg2 ;
-(unsigned char)protocol;
-(NSNumber *)typeValue;
-(id)description;
-(NSDictionary *)jsonDictionary;
-(NSDictionary *)prettyJSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 protocol:(unsigned char)arg2 typeValue:(id)arg3 ;
@end

