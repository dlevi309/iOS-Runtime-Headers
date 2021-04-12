/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
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

