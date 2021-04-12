/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface IDSEndpointTransparencyState : NSObject <NSSecureCoding, NSCopying> {

	NSData* _pushToken;
	long long _verificationState;

}

@property (nonatomic,readonly) NSData * pushToken;                       //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) long long verificationState;              //@synthesize verificationState=_verificationState - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)pushToken;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)verificationState;
-(BOOL)isEqualToEndpointTransparencyState:(id)arg1 ;
-(id)initWithPushToken:(id)arg1 verificationState:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

