/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKImage;

@interface PKShareablePassMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _credentialIdentifier;
	NSString* _cardConfigurationIdentifier;
	NSString* _sharingInstanceIdentifier;
	NSString* _localizedDescription;
	NSString* _ownerDisplayName;
	PKImage* _pkPassThumbnailImage;
	NSString* _nonce;

}

@property (nonatomic,retain) NSString * credentialIdentifier;                     //@synthesize credentialIdentifier=_credentialIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cardConfigurationIdentifier;              //@synthesize cardConfigurationIdentifier=_cardConfigurationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sharingInstanceIdentifier;                //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (assign,nonatomic) CGImageRef passThumbnailImage; 
@property (nonatomic,retain) NSString * localizedDescription;                     //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSString * ownerDisplayName;                         //@synthesize ownerDisplayName=_ownerDisplayName - In the implementation block
@property (nonatomic,retain) PKImage * pkPassThumbnailImage;                      //@synthesize pkPassThumbnailImage=_pkPassThumbnailImage - In the implementation block
@property (nonatomic,retain) NSString * nonce;                                    //@synthesize nonce=_nonce - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProvisioningCredentialIdentifier:(id)arg1 cardConfigurationIdentifier:(id)arg2 sharingInstanceIdentifier:(id)arg3 passThumbnailImage:(CGImageRef)arg4 ownerDisplayName:(id)arg5 localizedDescription:(id)arg6 ;
-(void)setNonce:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)ownerDisplayName;
-(CGImageRef)passThumbnailImage;
-(NSString *)localizedDescription;
-(void)setOwnerDisplayName:(NSString *)arg1 ;
-(void)setCardConfigurationIdentifier:(NSString *)arg1 ;
-(void)setPkPassThumbnailImage:(PKImage *)arg1 ;
-(NSString *)cardConfigurationIdentifier;
-(PKImage *)pkPassThumbnailImage;
-(NSString *)credentialIdentifier;
-(void)setCredentialIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(NSString *)nonce;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

