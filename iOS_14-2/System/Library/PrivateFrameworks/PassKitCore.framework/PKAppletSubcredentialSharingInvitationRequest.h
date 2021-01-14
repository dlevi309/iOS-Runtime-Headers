/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface PKAppletSubcredentialSharingInvitationRequest : NSObject <NSSecureCoding> {

	NSString* _credentialIdentifier;
	NSString* _sharedCredentialIdentifier;
	NSUUID* _sharingSessionIdentifier;
	long long _deviceType;

}

@property (nonatomic,copy) NSString * credentialIdentifier;                    //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sharedCredentialIdentifier;              //@synthesize sharedCredentialIdentifier=_sharedCredentialIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * sharingSessionIdentifier;                //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (assign,nonatomic) long long deviceType;                             //@synthesize deviceType=_deviceType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)deviceType;
-(void)setDeviceType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(NSUUID *)sharingSessionIdentifier;
-(NSString *)sharedCredentialIdentifier;
-(void)setSharedCredentialIdentifier:(NSString *)arg1 ;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

