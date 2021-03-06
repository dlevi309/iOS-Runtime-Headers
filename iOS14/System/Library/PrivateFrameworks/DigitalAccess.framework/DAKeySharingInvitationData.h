/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface DAKeySharingInvitationData : NSObject <NSSecureCoding> {

	NSUUID* _sharingSessionIdentifier;
	NSString* _invitationIdentifier;
	NSString* _friendKeyIdentifier;
	long long _sharingTargetType;
	long long _invitationState;
	NSString* _passwordPiece;

}

@property (nonatomic,readonly) NSUUID * sharingSessionIdentifier;              //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * invitationIdentifier;                //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * friendKeyIdentifier;                 //@synthesize friendKeyIdentifier=_friendKeyIdentifier - In the implementation block
@property (nonatomic,readonly) long long sharingTargetType;                    //@synthesize sharingTargetType=_sharingTargetType - In the implementation block
@property (nonatomic,readonly) long long invitationState;                      //@synthesize invitationState=_invitationState - In the implementation block
@property (nonatomic,readonly) NSString * passwordPiece;                       //@synthesize passwordPiece=_passwordPiece - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)invitationIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)sharingTargetType;
-(long long)invitationState;
-(id)description;
-(NSUUID *)sharingSessionIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)friendKeyIdentifier;
-(NSString *)passwordPiece;
-(id)initWithSessionUUID:(id)arg1 invitationIdentifier:(id)arg2 friendKeyIdentifier:(id)arg3 sharingTarget:(long long)arg4 state:(long long)arg5 passwordPiece:(id)arg6 ;
@end

