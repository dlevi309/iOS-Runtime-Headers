/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(BOOL)isRevoked;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(void)setLocalDevice:(BOOL)arg1 ;
-(PKAppletSubcredentialEntitlement *)entitlement;
-(NSString *)recipientIdentifier;
-(NSString *)recipientHandle;
-(NSUUID *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
-(void)setEntitlement:(PKAppletSubcredentialEntitlement *)arg1 ;
-(void)setRevoked:(BOOL)arg1 ;
-(void)setRecipientHandle:(NSString *)arg1 ;
-(BOOL)isLocalDevice;
@end

