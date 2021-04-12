/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(long long)invitationState;
-(void)setInvitationState:(long long)arg1 ;
-(id)initWithInvitationState:(long long)arg1 invitationIdentifier:(id)arg2 expiryDate:(id)arg3 ;
@end

