/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterWANFirewallRuleList : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _portRules;
	NSMutableArray* _icmpRules;

}

@property (nonatomic,retain) NSMutableArray * portRules;              //@synthesize portRules=_portRules - In the implementation block
@property (nonatomic,retain) NSMutableArray * icmpRules;              //@synthesize icmpRules=_icmpRules - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(NSString *)description;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(NSMutableArray *)portRules;
-(void)setPortRules:(NSMutableArray *)arg1 ;
-(NSMutableArray *)icmpRules;
-(void)setIcmpRules:(NSMutableArray *)arg1 ;
-(id)initWithPortRules:(id)arg1 icmpRules:(id)arg2 ;
@end

