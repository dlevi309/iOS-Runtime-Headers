/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext : PBCodable <NSCopying> {

	NSMutableArray* _setupFields;
	BOOL _cameraFirstProvisioningEnabled;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) BOOL hasCameraFirstProvisioningEnabled; 
@property (assign,nonatomic) BOOL cameraFirstProvisioningEnabled;                 //@synthesize cameraFirstProvisioningEnabled=_cameraFirstProvisioningEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * setupFields;                        //@synthesize setupFields=_setupFields - In the implementation block
+(Class)setupFieldsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCameraFirstProvisioningEnabled:(BOOL)arg1 ;
-(void)setSetupFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)setupFields;
-(BOOL)cameraFirstProvisioningEnabled;
-(void)addSetupFields:(id)arg1 ;
-(unsigned long long)setupFieldsCount;
-(void)clearSetupFields;
-(id)setupFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setHasCameraFirstProvisioningEnabled:(BOOL)arg1 ;
-(BOOL)hasCameraFirstProvisioningEnabled;
@end

