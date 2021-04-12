/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NPKProtoStandalonePaymentSetupProduct;

@interface NPKProtoStandalonePaymentProvisioningFlowProvisioningProgressStepContext : PBCodable <NSCopying> {

	NSString* _localizedProgressDescription;
	NPKProtoStandalonePaymentSetupProduct* _product;

}

@property (nonatomic,readonly) BOOL hasLocalizedProgressDescription; 
@property (nonatomic,retain) NSString * localizedProgressDescription;                      //@synthesize localizedProgressDescription=_localizedProgressDescription - In the implementation block
@property (nonatomic,readonly) BOOL hasProduct; 
@property (nonatomic,retain) NPKProtoStandalonePaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProduct:(NPKProtoStandalonePaymentSetupProduct *)arg1 ;
-(NPKProtoStandalonePaymentSetupProduct *)product;
-(NSString *)localizedProgressDescription;
-(BOOL)hasProduct;
-(void)setLocalizedProgressDescription:(NSString *)arg1 ;
-(BOOL)hasLocalizedProgressDescription;
@end

