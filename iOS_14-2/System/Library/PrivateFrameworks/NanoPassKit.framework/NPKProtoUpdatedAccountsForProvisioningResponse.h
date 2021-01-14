/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoUpdatedAccountsForProvisioningResponse : PBCodable <NSCopying> {

	NSData* _accountsOnDeviceData;
	NSData* _accountsRequiringProvisioningData;
	BOOL _pending;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                             //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountsRequiringProvisioningData; 
@property (nonatomic,retain) NSData * accountsRequiringProvisioningData;               //@synthesize accountsRequiringProvisioningData=_accountsRequiringProvisioningData - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountsOnDeviceData; 
@property (nonatomic,retain) NSData * accountsOnDeviceData;                            //@synthesize accountsOnDeviceData=_accountsOnDeviceData - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(void)setAccountsRequiringProvisioningData:(NSData *)arg1 ;
-(void)setAccountsOnDeviceData:(NSData *)arg1 ;
-(BOOL)hasAccountsRequiringProvisioningData;
-(BOOL)hasAccountsOnDeviceData;
-(NSData *)accountsRequiringProvisioningData;
-(NSData *)accountsOnDeviceData;
@end

