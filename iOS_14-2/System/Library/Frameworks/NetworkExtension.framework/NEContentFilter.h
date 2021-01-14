/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	BOOL _enabled;
	BOOL _enableManualMode;
	NEFilterProviderConfiguration* _provider;
	long long _grade;

}

@property (assign) BOOL enableManualMode;                               //@synthesize enableManualMode=_enableManualMode - In the implementation block
@property (getter=isEnabled) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (copy) NEFilterProviderConfiguration * provider;              //@synthesize provider=_provider - In the implementation block
@property (assign,nonatomic) long long grade;                           //@synthesize grade=_grade - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setProvider:(NEFilterProviderConfiguration *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(long long)grade;
-(id)init;
-(NEFilterProviderConfiguration *)provider;
-(void)setGrade:(long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)enableManualMode;
-(void)setEnableManualMode:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

