/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DNDModeAssertionSource : NSObject <NSCopying, NSSecureCoding> {

	NSString* _clientIdentifier;
	NSString* _deviceIdentifier;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier;              //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 deviceIdentifier:(id)arg2 ;
@end

