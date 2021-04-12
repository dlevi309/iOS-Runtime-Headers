/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, NSDictionary;

@interface HMDNetworkRouterFirewallRule : HMFObject <HMFLogging> {

	BOOL _critical;
	NSString* _name;
	NSDictionary* _jsonDictionary;

}

@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (getter=isCritical,nonatomic,readonly) BOOL critical;                  //@synthesize critical=_critical - In the implementation block
@property (nonatomic,readonly) NSDictionary * prettyJSONDictionary; 
@property (nonatomic,readonly) NSDictionary * jsonDictionary;                    //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)__transportProtocolToString:(unsigned char)arg1 ;
-(NSString *)name;
-(BOOL)isCritical;
-(id)attributeDescriptions;
-(NSDictionary *)jsonDictionary;
-(NSDictionary *)prettyJSONDictionary;
-(id)initWithJSONDictionary:(id)arg1 name:(id)arg2 critical:(BOOL)arg3 ;
-(id)initWithJSONDictionary:(id)arg1 critical:(BOOL)arg2 ;
@end

