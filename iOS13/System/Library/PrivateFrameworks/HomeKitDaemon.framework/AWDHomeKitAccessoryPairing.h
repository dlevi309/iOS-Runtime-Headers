/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _appIdentifier;
	int _certified;
	int _credentialType;
	unsigned _duration;
	int _errorCode;
	unsigned _retryCount;
	int _transportType;
	AWDHomeKitVendorInformation* _vendorDetails;
	BOOL _isAdd;
	BOOL _isAddWithOwnershipProof;
	BOOL _isAddedViaWAC;
	BOOL _isNetworkRouterAdd;
	BOOL _isNetworkRouterReplace;
	BOOL _isSecureWAC;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                            //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsAdd; 
@property (assign,nonatomic) BOOL isAdd;                                               //@synthesize isAdd=_isAdd - In the implementation block
@property (assign,nonatomic) BOOL hasIsAddedViaWAC; 
@property (assign,nonatomic) BOOL isAddedViaWAC;                                       //@synthesize isAddedViaWAC=_isAddedViaWAC - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;              //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) BOOL hasCertified; 
@property (assign,nonatomic) int certified;                                            //@synthesize certified=_certified - In the implementation block
@property (assign,nonatomic) BOOL hasIsSecureWAC; 
@property (assign,nonatomic) BOOL isSecureWAC;                                         //@synthesize isSecureWAC=_isSecureWAC - In the implementation block
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (assign,nonatomic) unsigned retryCount;                                      //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL hasCredentialType; 
@property (assign,nonatomic) int credentialType;                                       //@synthesize credentialType=_credentialType - In the implementation block
@property (assign,nonatomic) BOOL hasIsAddWithOwnershipProof; 
@property (assign,nonatomic) BOOL isAddWithOwnershipProof;                             //@synthesize isAddWithOwnershipProof=_isAddWithOwnershipProof - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkRouterAdd; 
@property (assign,nonatomic) BOOL isNetworkRouterAdd;                                  //@synthesize isNetworkRouterAdd=_isNetworkRouterAdd - In the implementation block
@property (assign,nonatomic) BOOL hasIsNetworkRouterReplace; 
@property (assign,nonatomic) BOOL isNetworkRouterReplace;                              //@synthesize isNetworkRouterReplace=_isNetworkRouterReplace - In the implementation block
@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                                 //@synthesize appIdentifier=_appIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(int)credentialType;
-(void)setCredentialType:(int)arg1 ;
-(BOOL)hasCredentialType;
-(unsigned)retryCount;
-(void)setRetryCount:(unsigned)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(int)errorCode;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasRetryCount:(BOOL)arg1 ;
-(BOOL)hasRetryCount;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(BOOL)arg1 ;
-(BOOL)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
-(BOOL)isNetworkRouterAdd;
-(BOOL)isNetworkRouterReplace;
-(void)setIsAdd:(BOOL)arg1 ;
-(void)setHasIsAdd:(BOOL)arg1 ;
-(BOOL)hasIsAdd;
-(void)setIsAddedViaWAC:(BOOL)arg1 ;
-(void)setHasIsAddedViaWAC:(BOOL)arg1 ;
-(BOOL)hasIsAddedViaWAC;
-(void)setIsSecureWAC:(BOOL)arg1 ;
-(void)setHasIsSecureWAC:(BOOL)arg1 ;
-(BOOL)hasIsSecureWAC;
-(void)setHasCredentialType:(BOOL)arg1 ;
-(id)credentialTypeAsString:(int)arg1 ;
-(int)StringAsCredentialType:(id)arg1 ;
-(void)setIsAddWithOwnershipProof:(BOOL)arg1 ;
-(void)setHasIsAddWithOwnershipProof:(BOOL)arg1 ;
-(BOOL)hasIsAddWithOwnershipProof;
-(void)setIsNetworkRouterAdd:(BOOL)arg1 ;
-(void)setHasIsNetworkRouterAdd:(BOOL)arg1 ;
-(BOOL)hasIsNetworkRouterAdd;
-(void)setIsNetworkRouterReplace:(BOOL)arg1 ;
-(void)setHasIsNetworkRouterReplace:(BOOL)arg1 ;
-(BOOL)hasIsNetworkRouterReplace;
-(BOOL)isAdd;
-(BOOL)isAddedViaWAC;
-(BOOL)isSecureWAC;
-(BOOL)isAddWithOwnershipProof;
@end

