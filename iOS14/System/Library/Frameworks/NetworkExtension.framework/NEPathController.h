/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _ignoreRouteRules;
	BOOL _ignoreFallback;
	long long _cellularFallbackFlags;
	NSArray* _pathRules;
	NSArray* _payloadAppRules;

}

@property (copy) NSArray * payloadAppRules;                          //@synthesize payloadAppRules=_payloadAppRules - In the implementation block
@property (getter=isEnabled) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (assign) BOOL ignoreRouteRules;                            //@synthesize ignoreRouteRules=_ignoreRouteRules - In the implementation block
@property (assign) BOOL ignoreFallback;                              //@synthesize ignoreFallback=_ignoreFallback - In the implementation block
@property (assign) long long cellularFallbackFlags;                  //@synthesize cellularFallbackFlags=_cellularFallbackFlags - In the implementation block
@property (copy) NSArray * pathRules;                                //@synthesize pathRules=_pathRules - In the implementation block
@property (nonatomic,readonly) BOOL hasNonDefaultRules; 
+(BOOL)supportsSecureCoding;
+(id)copyAggregatePathRules;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setPathRules:(NSArray *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(void)setCellularFallbackFlags:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)pathRules;
-(BOOL)hasNonDefaultRules;
-(void)setIgnoreRouteRules:(BOOL)arg1 ;
-(BOOL)ignoreFallback;
-(NSArray *)payloadAppRules;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)ignoreRouteRules;
-(long long)cellularFallbackFlags;
-(BOOL)isEnabled;
-(id)copyPathRuleSigningIdentifiers;
-(BOOL)removePathRuleBySigningIdentifier:(id)arg1 ;
-(void)setPayloadAppRules:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIgnoreFallback:(BOOL)arg1 ;
-(id)copyPathRuleBySigningIdentifier:(id)arg1 ;
@end

