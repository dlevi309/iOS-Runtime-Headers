/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMDTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterLANFirewallRuleList : NSObject <NSCopying, HMDTLVProtocol> {

	NSMutableArray* _multicastBridgingRules;
	NSMutableArray* _staticPortRules;
	NSMutableArray* _dynamicPortRules;
	NSMutableArray* _staticICMPRules;

}

@property (nonatomic,retain) NSMutableArray * multicastBridgingRules;              //@synthesize multicastBridgingRules=_multicastBridgingRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * staticPortRules;                     //@synthesize staticPortRules=_staticPortRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * dynamicPortRules;                    //@synthesize dynamicPortRules=_dynamicPortRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * staticICMPRules;                     //@synthesize staticICMPRules=_staticICMPRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSMutableArray *)dynamicPortRules;
-(void)setDynamicPortRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)multicastBridgingRules;
-(void)setMulticastBridgingRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)staticPortRules;
-(void)setStaticPortRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)staticICMPRules;
-(void)setStaticICMPRules:(NSMutableArray *)arg1 ;
-(id)initWithMulticastBridgingRules:(id)arg1 staticPortRules:(id)arg2 dynamicPortRules:(id)arg3 staticICMPRules:(id)arg4 ;
@end

