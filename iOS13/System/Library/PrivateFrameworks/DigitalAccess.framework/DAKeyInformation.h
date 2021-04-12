/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalAccess.framework/DigitalAccess
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, DAKeyEncryptedRequest;

@interface DAKeyInformation : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _identifier;
	NSString* _localIdentifier;
	NSString* _pairedEntityIdentifier;
	NSData* _trackingReceipt;
	NSData* _revocationAttestation;
	DAKeyEncryptedRequest* _trackingRequest;

}

@property (nonatomic,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;                           //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * pairedEntityIdentifier;                    //@synthesize pairedEntityIdentifier=_pairedEntityIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * trackingReceipt;                             //@synthesize trackingReceipt=_trackingReceipt - In the implementation block
@property (nonatomic,readonly) NSData * revocationAttestation;                       //@synthesize revocationAttestation=_revocationAttestation - In the implementation block
@property (nonatomic,readonly) DAKeyEncryptedRequest * trackingRequest;              //@synthesize trackingRequest=_trackingRequest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithEndpoint:(id)arg1 ;
-(NSString *)localIdentifier;
-(NSString *)pairedEntityIdentifier;
-(DAKeyEncryptedRequest *)trackingRequest;
-(NSData *)revocationAttestation;
-(NSData *)trackingReceipt;
-(id)initWithKeyName:(id)arg1 identifier:(id)arg2 localIdentifier:(id)arg3 pairedEntityIdentifier:(id)arg4 trackingReceipt:(id)arg5 revocationAttestation:(id)arg6 trackingRequest:(id)arg7 ;
@end

