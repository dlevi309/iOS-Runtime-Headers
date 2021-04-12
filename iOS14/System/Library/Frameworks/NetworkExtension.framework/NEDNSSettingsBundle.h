/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NEDNSSettings;

@interface NEDNSSettingsBundle : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	NSArray* _onDemandRules;
	NEDNSSettings* _settings;

}

@property (getter=isEnabled) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (copy) NSArray * onDemandRules;               //@synthesize onDemandRules=_onDemandRules - In the implementation block
@property (copy) NEDNSSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)init;
-(NSArray *)onDemandRules;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSettings:(NEDNSSettings *)arg1 ;
-(void)setOnDemandRules:(NSArray *)arg1 ;
-(id)description;
-(NEDNSSettings *)settings;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

