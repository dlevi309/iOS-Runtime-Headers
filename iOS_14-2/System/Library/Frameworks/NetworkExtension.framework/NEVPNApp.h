/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN {

	BOOL _noRestriction;
	BOOL _restrictDomains;
	NSArray* _appRules;
	NSArray* _excludedDomains;

}

@property (copy) NSArray * appRules;                     //@synthesize appRules=_appRules - In the implementation block
@property (assign) BOOL noRestriction;                   //@synthesize noRestriction=_noRestriction - In the implementation block
@property (assign) BOOL restrictDomains;                 //@synthesize restrictDomains=_restrictDomains - In the implementation block
@property (copy) NSArray * excludedDomains;              //@synthesize excludedDomains=_excludedDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setNoRestriction:(BOOL)arg1 ;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(BOOL)noRestriction;
-(id)init;
-(void)setRestrictDomains:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyAppRuleIDs;
-(id)copyAppRuleByID:(id)arg1 ;
-(BOOL)removeAppRuleByID:(id)arg1 ;
-(void)setAppRules:(NSArray *)arg1 ;
-(id)copyUniqueSigningIdentifiers;
-(id)copyAppRuleBySigningIdentifier:(id)arg1 ;
-(BOOL)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1 ;
-(void)updateAppRulesForUID:(unsigned)arg1 ;
-(NSArray *)excludedDomains;
-(BOOL)restrictDomains;
-(id)initWithCoder:(id)arg1 ;
-(void)setExcludedDomains:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)appRules;
@end

