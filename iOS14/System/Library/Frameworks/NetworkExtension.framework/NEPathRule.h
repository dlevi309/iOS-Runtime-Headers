/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppRule.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSNumber;

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription> {

	BOOL _denyCellularFallback;
	BOOL _denyMulticast;
	BOOL _multicastPreferenceSet;
	BOOL _isIdentifierExternal;
	NSNumber* _aggregatePersonalCellular;
	NSNumber* _aggregateEnterpriseCellular;
	long long _internalCellularBehavior;
	NSNumber* _aggregatePersonalWiFi;
	NSNumber* _aggregateEnterpriseWiFi;
	long long _internalWiFiBehavior;

}

@property (retain) NSNumber * aggregatePersonalCellular;                         //@synthesize aggregatePersonalCellular=_aggregatePersonalCellular - In the implementation block
@property (retain) NSNumber * aggregateEnterpriseCellular;                       //@synthesize aggregateEnterpriseCellular=_aggregateEnterpriseCellular - In the implementation block
@property (assign) long long internalCellularBehavior;                           //@synthesize internalCellularBehavior=_internalCellularBehavior - In the implementation block
@property (retain) NSNumber * aggregatePersonalWiFi;                             //@synthesize aggregatePersonalWiFi=_aggregatePersonalWiFi - In the implementation block
@property (retain) NSNumber * aggregateEnterpriseWiFi;                           //@synthesize aggregateEnterpriseWiFi=_aggregateEnterpriseWiFi - In the implementation block
@property (assign) long long internalWiFiBehavior;                               //@synthesize internalWiFiBehavior=_internalWiFiBehavior - In the implementation block
@property (getter=isDefaultPathRule,readonly) BOOL defaultPathRule; 
@property (assign) long long cellularBehavior; 
@property (assign) long long wifiBehavior; 
@property (assign) BOOL denyCellularFallback;                                    //@synthesize denyCellularFallback=_denyCellularFallback - In the implementation block
@property (assign) BOOL denyMulticast;                                           //@synthesize denyMulticast=_denyMulticast - In the implementation block
@property (assign) BOOL multicastPreferenceSet;                                  //@synthesize multicastPreferenceSet=_multicastPreferenceSet - In the implementation block
@property (assign) BOOL isIdentifierExternal;                                    //@synthesize isIdentifierExternal=_isIdentifierExternal - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)aggregateNetworkBehavior:(long long)arg1 other:(long long)arg2 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSNumber *)aggregatePersonalCellular;
-(BOOL)isIdentifierExternal;
-(long long)wifiBehavior;
-(long long)internalCellularBehavior;
-(void)setAggregateEnterpriseWiFi:(NSNumber *)arg1 ;
-(void)setWifiBehavior:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)aggregatePersonalWiFi;
-(void)setIsIdentifierExternal:(BOOL)arg1 ;
-(NSNumber *)aggregateEnterpriseCellular;
-(void)setMulticastPreferenceSet:(BOOL)arg1 ;
-(BOOL)denyMulticast;
-(id)initDefaultPathRule;
-(void)setAggregatePersonalWiFi:(NSNumber *)arg1 ;
-(void)addCellularBehavior:(long long)arg1 grade:(long long)arg2 ;
-(id)description;
-(BOOL)isAggregateRule;
-(long long)cellularBehavior;
-(BOOL)supportsCellularBehavior:(long long)arg1 ;
-(BOOL)supportsWiFiBehavior:(long long)arg1 ;
-(void)setAggregateEnterpriseCellular:(NSNumber *)arg1 ;
-(void)setDenyMulticast:(BOOL)arg1 ;
-(BOOL)isDefaultPathRule;
-(id)initWithCoder:(id)arg1 ;
-(void)setCellularBehavior:(long long)arg1 ;
-(BOOL)multicastPreferenceSet;
-(BOOL)signingIdentifierAllowed:(id)arg1 domainsOrAccountsRequired:(out BOOL*)arg2 ;
-(void)addWiFiBehavior:(long long)arg1 grade:(long long)arg2 ;
-(void)setDenyCellularFallback:(BOOL)arg1 ;
-(void)setInternalCellularBehavior:(long long)arg1 ;
-(long long)internalWiFiBehavior;
-(BOOL)denyCellularFallback;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInternalWiFiBehavior:(long long)arg1 ;
-(NSNumber *)aggregateEnterpriseWiFi;
-(void)setAggregatePersonalCellular:(NSNumber *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

