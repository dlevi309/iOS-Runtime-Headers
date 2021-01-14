/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, PKSharedAppletSubcredentialMetadata;

@interface PKAppletSubcredentialSharingInvitationReceipt : NSObject <NSSecureCoding> {

	BOOL _forWatch;
	BOOL _requiresAuthentication;
	NSString* _identifier;
	NSUUID* _sharingSessionIdentifier;
	NSString* _recipientIdentifier;
	PKSharedAppletSubcredentialMetadata* _metadata;
	unsigned long long _status;

}

@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * sharingSessionIdentifier;                           //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (assign,getter=isForWatch,nonatomic) BOOL forWatch;                             //@synthesize forWatch=_forWatch - In the implementation block
@property (assign,nonatomic) BOOL requiresAuthentication;                                 //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,retain) PKSharedAppletSubcredentialMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                   //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)requiresAuthentication;
-(void)setRequiresAuthentication:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToInvitationReceipt:(id)arg1 ;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(id)initWithInvitationData:(id)arg1 recipientIdentifier:(id)arg2 ;
-(void)setMetadata:(PKSharedAppletSubcredentialMetadata *)arg1 ;
-(BOOL)isForWatch;
-(id)description;
-(void)setForWatch:(BOOL)arg1 ;
-(NSUUID *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)hash;
-(NSString *)recipientIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(PKSharedAppletSubcredentialMetadata *)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)status;
@end

