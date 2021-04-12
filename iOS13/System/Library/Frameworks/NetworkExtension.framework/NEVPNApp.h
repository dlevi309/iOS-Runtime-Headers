/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPN.h>

@class NSArray;

@interface NEVPNApp : NEVPN {

	BOOL _noRestriction;
	BOOL _restrictDomains;
	NSArray* _appRules;

}

@property (copy) NSArray * appRules;                  //@synthesize appRules=_appRules - In the implementation block
@property (assign) BOOL noRestriction;                //@synthesize noRestriction=_noRestriction - In the implementation block
@property (assign) BOOL restrictDomains;              //@synthesize restrictDomains=_restrictDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)restrictDomains;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)noRestriction;
-(void)setNoRestriction:(BOOL)arg1 ;
-(BOOL)removeAppRuleByID:(id)arg1 ;
-(NSArray *)appRules;
-(void)setAppRules:(NSArray *)arg1 ;
-(void)setRestrictDomains:(BOOL)arg1 ;
-(id)copyAppRuleIDs;
-(id)copyAppRuleByID:(id)arg1 ;
-(id)copyUniqueSigningIdentifiers;
-(id)copyAppRuleBySigningIdentifier:(id)arg1 ;
-(BOOL)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1 ;
-(void)updateAppRulesForUID:(unsigned)arg1 ;
@end

