/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface HMHomeInvitationData : NSObject <NSSecureCoding> {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _invitationState;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long invitationState;               //@synthesize invitationState=_invitationState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)homeInvitationStateDescription:(long long)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(long long)invitationState;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)initWithInvitationState:(long long)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3 ;
-(void)setInvitationState:(long long)arg1 ;
@end

