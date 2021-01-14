/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandalonePaymentApplication, NPKProtoStandalonePass;

@interface NPKProtoStandalonePaymentPass : PBCodable <NSCopying> {

	int _activationState;
	NSString* _deviceAccountIdentifier;
	NSString* _deviceAccountNumberSuffix;
	NPKProtoStandalonePaymentApplication* _devicePrimaryPaymentApplication;
	NPKProtoStandalonePass* _pass;
	NSString* _primaryAccountIdentifier;
	NSString* _primaryAccountNumberSuffix;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,retain) NPKProtoStandalonePass * pass;                                                       //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAccountIdentifier; 
@property (nonatomic,retain) NSString * primaryAccountIdentifier;                                                 //@synthesize primaryAccountIdentifier=_primaryAccountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAccountNumberSuffix; 
@property (nonatomic,retain) NSString * primaryAccountNumberSuffix;                                               //@synthesize primaryAccountNumberSuffix=_primaryAccountNumberSuffix - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceAccountIdentifier; 
@property (nonatomic,retain) NSString * deviceAccountIdentifier;                                                  //@synthesize deviceAccountIdentifier=_deviceAccountIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceAccountNumberSuffix; 
@property (nonatomic,retain) NSString * deviceAccountNumberSuffix;                                                //@synthesize deviceAccountNumberSuffix=_deviceAccountNumberSuffix - In the implementation block
@property (assign,nonatomic) BOOL hasActivationState; 
@property (assign,nonatomic) int activationState;                                                                 //@synthesize activationState=_activationState - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePrimaryPaymentApplication; 
@property (nonatomic,retain) NPKProtoStandalonePaymentApplication * devicePrimaryPaymentApplication;              //@synthesize devicePrimaryPaymentApplication=_devicePrimaryPaymentApplication - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPass:(NPKProtoStandalonePass *)arg1 ;
-(int)activationState;
-(NSString *)deviceAccountNumberSuffix;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasPrimaryAccountNumberSuffix;
-(BOOL)hasPrimaryAccountIdentifier;
-(id)description;
-(NPKProtoStandalonePass *)pass;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(NSString *)deviceAccountIdentifier;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(void)setDevicePrimaryPaymentApplication:(NPKProtoStandalonePaymentApplication *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)primaryAccountIdentifier;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setActivationState:(int)arg1 ;
-(NSString *)primaryAccountNumberSuffix;
-(NPKProtoStandalonePaymentApplication *)devicePrimaryPaymentApplication;
-(void)setHasActivationState:(BOOL)arg1 ;
-(BOOL)hasActivationState;
-(id)activationStateAsString:(int)arg1 ;
-(int)StringAsActivationState:(id)arg1 ;
-(void)setDeviceAccountNumberSuffix:(NSString *)arg1 ;
-(BOOL)hasDeviceAccountIdentifier;
-(BOOL)hasDeviceAccountNumberSuffix;
-(BOOL)hasDevicePrimaryPaymentApplication;
@end

