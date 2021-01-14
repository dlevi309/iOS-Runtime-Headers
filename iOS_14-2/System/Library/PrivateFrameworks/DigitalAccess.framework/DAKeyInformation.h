/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, DAKeyEncryptedRequest;

@interface DAKeyInformation : NSObject <NSSecureCoding> {

	BOOL _onlineImmobilizerToken;
	NSString* _name;
	NSString* _identifier;
	NSString* _localIdentifier;
	NSString* _pairedEntityIdentifier;
	NSString* _invitationIdentifier;
	NSData* _trackingReceipt;
	NSData* _revocationAttestation;
	DAKeyEncryptedRequest* _trackingRequest;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;                           //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * pairedEntityIdentifier;                    //@synthesize pairedEntityIdentifier=_pairedEntityIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * invitationIdentifier;                      //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * trackingReceipt;                             //@synthesize trackingReceipt=_trackingReceipt - In the implementation block
@property (nonatomic,readonly) NSData * revocationAttestation;                       //@synthesize revocationAttestation=_revocationAttestation - In the implementation block
@property (nonatomic,readonly) DAKeyEncryptedRequest * trackingRequest;              //@synthesize trackingRequest=_trackingRequest - In the implementation block
@property (nonatomic,readonly) BOOL onlineImmobilizerToken;                          //@synthesize onlineImmobilizerToken=_onlineImmobilizerToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localIdentifier;
-(NSString *)invitationIdentifier;
-(NSData *)revocationAttestation;
-(DAKeyEncryptedRequest *)trackingRequest;
-(NSData *)trackingReceipt;
-(NSString *)pairedEntityIdentifier;
-(id)initWithEndpoint:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)onlineImmobilizerToken;
-(id)initWithKeyName:(id)arg1 identifier:(id)arg2 localIdentifier:(id)arg3 pairedEntityIdentifier:(id)arg4 invitationIdentifier:(id)arg5 trackingReceipt:(id)arg6 revocationAttestation:(id)arg7 trackingRequest:(id)arg8 onlineImmoToken:(BOOL)arg9 ;
@end

