/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData;

@interface NEDNSProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	long long _type;
	NSArray* _servers;
	NSString* _domain;
	NSData* _publicKey;

}

@property (readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (readonly) NSArray * servers;              //@synthesize servers=_servers - In the implementation block
@property (retain) NSString * domain;                //@synthesize domain=_domain - In the implementation block
@property (retain) NSData * publicKey;               //@synthesize publicKey=_publicKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)publicKey;
-(void)setDomain:(NSString *)arg1 ;
-(void)setPublicKey:(NSData *)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(NSArray *)servers;
-(id)initWithType:(long long)arg1 servers:(id)arg2 ;
@end

