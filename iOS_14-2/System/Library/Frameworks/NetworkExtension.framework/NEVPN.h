/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NEVPNProtocol;

@interface NEVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _onDemandEnabled;
	BOOL _disconnectOnDemandEnabled;
	BOOL _onDemandUserOverrideDisabled;
	NSArray* _onDemandRules;
	NEVPNProtocol* _protocol;
	long long _tunnelType;
	NSArray* _exceptionApps;

}

@property (copy) NSArray * exceptionApps;                                                                          //@synthesize exceptionApps=_exceptionApps - In the implementation block
@property (getter=isEnabled) BOOL enabled;                                                                         //@synthesize enabled=_enabled - In the implementation block
@property (getter=isOnDemandEnabled) BOOL onDemandEnabled;                                                         //@synthesize onDemandEnabled=_onDemandEnabled - In the implementation block
@property (assign,getter=isDisconnectOnDemandEnabled,nonatomic) BOOL disconnectOnDemandEnabled;                    //@synthesize disconnectOnDemandEnabled=_disconnectOnDemandEnabled - In the implementation block
@property (assign,getter=isOnDemandUserOverrideDisabled,nonatomic) BOOL onDemandUserOverrideDisabled;              //@synthesize onDemandUserOverrideDisabled=_onDemandUserOverrideDisabled - In the implementation block
@property (copy) NSArray * onDemandRules;                                                                          //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (copy) NEVPNProtocol * protocol;                                                                         //@synthesize protocol=_protocol - In the implementation block
@property (assign) long long tunnelType;                                                                           //@synthesize tunnelType=_tunnelType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProtocol:(NEVPNProtocol *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)init;
-(NEVPNProtocol *)protocol;
-(NSArray *)onDemandRules;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)tunnelType;
-(void)setTunnelType:(long long)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(void)setOnDemandEnabled:(BOOL)arg1 ;
-(void)setDisconnectOnDemandEnabled:(BOOL)arg1 ;
-(void)setOnDemandUserOverrideDisabled:(BOOL)arg1 ;
-(id)description;
-(BOOL)isDisconnectOnDemandEnabled;
-(BOOL)isOnDemandUserOverrideDisabled;
-(BOOL)isOnDemandEnabled;
-(NSArray *)exceptionApps;
-(void)setExceptionApps:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

