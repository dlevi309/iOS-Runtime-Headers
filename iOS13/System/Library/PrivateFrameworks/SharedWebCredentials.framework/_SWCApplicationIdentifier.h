/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)redactedDescription;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)rawValue;
-(BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)arg1 ;
-(NSString *)prefix;
-(id)initForBundleProxy:(id)arg1 ;
@end

