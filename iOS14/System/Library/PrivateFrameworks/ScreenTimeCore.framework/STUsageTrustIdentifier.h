/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STUsageTrustIdentifier : NSObject <NSCopying, NSSecureCoding> {

	BOOL _usageTrusted;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) BOOL usageTrusted;                       //@synthesize usageTrusted=_usageTrusted - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)usageTrusted;
-(id)initWithIdentifier:(id)arg1 usageTrusted:(BOOL)arg2 ;
-(void)_stUsageTrustIdentifierCommonInitWithIdentifier:(id)arg1 usageTrusted:(BOOL)arg2 ;
@end

