/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying> {

	NSString* _serviceName;
	NSString* _bundleIdentifier;
	long long _action;

}

@property (copy) NSString * serviceName;                   //@synthesize serviceName=_serviceName - In the implementation block
@property (copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) long long action;                       //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)serviceName;
-(long long)action;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setAction:(long long)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end

