/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)pushToken;
-(long long)verificationState;
-(BOOL)isEqualToEndpointTransparencyState:(id)arg1 ;
-(id)initWithPushToken:(id)arg1 verificationState:(long long)arg2 ;
@end

