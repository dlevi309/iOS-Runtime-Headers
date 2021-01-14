/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID, PKAppletSubcredentialEntitlement;

@interface PKSharedAppletSubcredentialMetadata : NSObject <NSSecureCoding, NSCopying> {

	BOOL _localDevice;
	BOOL _revoked;
	NSString* _recipientIdentifier;
	NSString* _recipientHandle;
	NSUUID* _sharingSessionIdentifier;
	NSString* _groupIdentifier;
	PKAppletSubcredentialEntitlement* _entitlement;

}

@property (assign,getter=isLocalDevice,nonatomic) BOOL localDevice;                       //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * recipientHandle;                                    //@synthesize recipientHandle=_recipientHandle - In the implementation block
@property (assign,getter=isRevoked,nonatomic) BOOL revoked;                               //@synthesize revoked=_revoked - In the implementation block
@property (nonatomic,retain) NSUUID * sharingSessionIdentifier;                           //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                                    //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) PKAppletSubcredentialEntitlement * entitlement;              //@synthesize entitlement=_entitlement - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataWithSharingRequest:(id)arg1 andInvitationReceipt:(id)arg2 ;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLocalDevice;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(id)description;
-(NSUUID *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
-(NSString *)recipientIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setEntitlement:(PKAppletSubcredentialEntitlement *)arg1 ;
-(void)setLocalDevice:(BOOL)arg1 ;
-(void)setRecipientHandle:(NSString *)arg1 ;
-(NSString *)recipientHandle;
-(BOOL)isRevoked;
-(void)setRevoked:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

