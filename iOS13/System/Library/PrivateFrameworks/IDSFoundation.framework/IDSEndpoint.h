/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSURI, NSData, IDSEndpointCapabilities, IDSMPPublicDeviceIdentityContainer, NSError, NSDate, NSString;

@interface IDSEndpoint : NSObject <NSSecureCoding, NSCopying> {

	char _legacyVersion;
	BOOL _verifiedBusiness;
	short _ngmVersion;
	IDSURI* _URI;
	NSData* _pushToken;
	IDSEndpointCapabilities* _capabilities;
	IDSMPPublicDeviceIdentityContainer* _publicDeviceIdentityContainer;
	NSData* _serializedNGMDeviceIdentity;
	NSData* _serializedLegacyPublicIdentity;
	NSData* _serializedNGMDevicePrekey;
	NSError* _identityContainerDeserializationError;
	NSData* _KTLoggableData;
	NSData* _sessionToken;
	NSDate* _expireDate;
	NSDate* _refreshDate;
	NSString* _anonymizedSenderID;
	NSString* _senderCorrelationIdentifier;
	double _queryTimeInterval;

}

@property (nonatomic,retain) IDSURI * URI;                                                                    //@synthesize URI=_URI - In the implementation block
@property (nonatomic,retain) NSData * pushToken;                                                              //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) IDSMPPublicDeviceIdentityContainer * publicDeviceIdentityContainer;              //@synthesize publicDeviceIdentityContainer=_publicDeviceIdentityContainer - In the implementation block
@property (nonatomic,retain) IDSEndpointCapabilities * capabilities;                                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSData * serializedNGMDeviceIdentity;                                          //@synthesize serializedNGMDeviceIdentity=_serializedNGMDeviceIdentity - In the implementation block
@property (nonatomic,readonly) NSData * serializedLegacyPublicIdentity;                                       //@synthesize serializedLegacyPublicIdentity=_serializedLegacyPublicIdentity - In the implementation block
@property (nonatomic,readonly) NSData * serializedNGMDevicePrekey;                                            //@synthesize serializedNGMDevicePrekey=_serializedNGMDevicePrekey - In the implementation block
@property (nonatomic,readonly) short ngmVersion;                                                              //@synthesize ngmVersion=_ngmVersion - In the implementation block
@property (nonatomic,readonly) char legacyVersion;                                                            //@synthesize legacyVersion=_legacyVersion - In the implementation block
@property (nonatomic,readonly) NSError * identityContainerDeserializationError;                               //@synthesize identityContainerDeserializationError=_identityContainerDeserializationError - In the implementation block
@property (nonatomic,readonly) NSData * KTLoggableData;                                                       //@synthesize KTLoggableData=_KTLoggableData - In the implementation block
@property (nonatomic,readonly) NSData * sessionToken;                                                         //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,readonly) NSDate * expireDate;                                                           //@synthesize expireDate=_expireDate - In the implementation block
@property (nonatomic,readonly) NSDate * refreshDate;                                                          //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) NSString * anonymizedSenderID;                                                 //@synthesize anonymizedSenderID=_anonymizedSenderID - In the implementation block
@property (nonatomic,readonly) BOOL verifiedBusiness;                                                         //@synthesize verifiedBusiness=_verifiedBusiness - In the implementation block
@property (nonatomic,readonly) NSString * senderCorrelationIdentifier;                                        //@synthesize senderCorrelationIdentifier=_senderCorrelationIdentifier - In the implementation block
@property (nonatomic,readonly) double queryTimeInterval;                                                      //@synthesize queryTimeInterval=_queryTimeInterval - In the implementation block
@property (nonatomic,readonly) NSData * serializedPublicLegacyIdentity; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(IDSEndpointCapabilities *)capabilities;
-(IDSURI *)URI;
-(void)setCapabilities:(IDSEndpointCapabilities *)arg1 ;
-(short)ngmVersion;
-(NSData *)sessionToken;
-(NSString *)senderCorrelationIdentifier;
-(id)initWithURI:(id)arg1 clientData:(id)arg2 KTLoggableData:(id)arg3 pushToken:(id)arg4 sessionToken:(id)arg5 expireDate:(id)arg6 refreshDate:(id)arg7 anonymizedSenderID:(id)arg8 verifiedBusiness:(BOOL)arg9 serializedPublicMessageProtectionIdentity:(id)arg10 senderCorrelationIdentifier:(id)arg11 queryTimeInterval:(double)arg12 serializedNGMDeviceIdentity:(id)arg13 serializedNGMDevicePrekey:(id)arg14 ;
-(id)initWithURI:(id)arg1 capabilities:(id)arg2 ngmVersion:(short)arg3 legacyVersion:(char)arg4 KTLoggableData:(id)arg5 pushToken:(id)arg6 sessionToken:(id)arg7 expireDate:(id)arg8 refreshDate:(id)arg9 anonymizedSenderID:(id)arg10 verifiedBusiness:(BOOL)arg11 serializedPublicMessageProtectionIdentity:(id)arg12 senderCorrelationIdentifier:(id)arg13 queryTimeInterval:(double)arg14 serializedNGMDeviceIdentity:(id)arg15 serializedNGMDevicePrekey:(id)arg16 ;
-(NSData *)serializedNGMDeviceIdentity;
-(BOOL)isEqualToEndpoint:(id)arg1 ;
-(double)queryTimeInterval;
-(NSData *)KTLoggableData;
-(NSDate *)expireDate;
-(NSDate *)refreshDate;
-(NSString *)anonymizedSenderID;
-(BOOL)verifiedBusiness;
-(NSData *)serializedLegacyPublicIdentity;
-(NSData *)serializedNGMDevicePrekey;
-(char)legacyVersion;
-(id)initWithURI:(id)arg1 clientData:(id)arg2 pushToken:(id)arg3 sessionToken:(id)arg4 expireDate:(id)arg5 refreshDate:(id)arg6 ;
-(IDSMPPublicDeviceIdentityContainer *)publicDeviceIdentityContainer;
-(NSData *)serializedPublicLegacyIdentity;
-(void)setURI:(IDSURI *)arg1 ;
-(void)setPublicDeviceIdentityContainer:(IDSMPPublicDeviceIdentityContainer *)arg1 ;
-(NSError *)identityContainerDeserializationError;
@end

