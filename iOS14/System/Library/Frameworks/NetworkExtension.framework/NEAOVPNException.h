/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying> {

	NSString* _serviceName;
	NSString* _bundleIdentifier;
	NSArray* _limitToProtocols;
	long long _action;

}

@property (copy) NSString * serviceName;                   //@synthesize serviceName=_serviceName - In the implementation block
@property (copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (copy) NSArray * limitToProtocols;               //@synthesize limitToProtocols=_limitToProtocols - In the implementation block
@property (assign) long long action;                       //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(NSArray *)limitToProtocols;
-(void)setLimitToProtocols:(NSArray *)arg1 ;
-(BOOL)isLimitedToUDP;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

