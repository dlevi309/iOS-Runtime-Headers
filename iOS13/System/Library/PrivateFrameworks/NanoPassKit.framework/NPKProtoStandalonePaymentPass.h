/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)activationState;
-(NSString *)primaryAccountIdentifier;
-(NSString *)primaryAccountNumberSuffix;
-(NSString *)deviceAccountIdentifier;
-(NSString *)deviceAccountNumberSuffix;
-(NPKProtoStandalonePass *)pass;
-(void)setPass:(NPKProtoStandalonePass *)arg1 ;
-(NPKProtoStandalonePaymentApplication *)devicePrimaryPaymentApplication;
-(void)setPrimaryAccountIdentifier:(NSString *)arg1 ;
-(void)setPrimaryAccountNumberSuffix:(NSString *)arg1 ;
-(void)setDevicePrimaryPaymentApplication:(NPKProtoStandalonePaymentApplication *)arg1 ;
-(BOOL)hasPrimaryAccountNumberSuffix;
-(BOOL)hasPrimaryAccountIdentifier;
-(void)setActivationState:(int)arg1 ;
-(void)setHasActivationState:(BOOL)arg1 ;
-(BOOL)hasActivationState;
-(id)activationStateAsString:(int)arg1 ;
-(int)StringAsActivationState:(id)arg1 ;
-(void)setDeviceAccountIdentifier:(NSString *)arg1 ;
-(void)setDeviceAccountNumberSuffix:(NSString *)arg1 ;
-(BOOL)hasDeviceAccountIdentifier;
-(BOOL)hasDeviceAccountNumberSuffix;
-(BOOL)hasDevicePrimaryPaymentApplication;
@end

