/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

#import <SharedWebCredentials/SharedWebCredentials-Structs.h>
#import <libobjc.A.dylib/SWCRedactedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	NSString* _prefix;
	NSString* _bundleIdentifier;

}

@property (readonly) NSString * rawValue; 
@property (readonly) NSString * prefix;                        //@synthesize prefix=_prefix - In the implementation block
@property (readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (getter=isValid,readonly) BOOL valid; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(BOOL)isCaseSensitive;
-(id)initWithString:(id)arg1 ;
-(NSString *)prefix;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(NSString *)rawValue;
-(id)description;
-(BOOL)isValid;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1 ;
-(id)initForBundleRecord:(id)arg1 ;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

