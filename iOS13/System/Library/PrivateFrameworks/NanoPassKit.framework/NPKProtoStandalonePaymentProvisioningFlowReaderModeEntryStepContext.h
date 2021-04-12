/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoStandalonePaymentSetupProduct, NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext : PBCodable <NSCopying> {

	NPKProtoStandalonePaymentSetupProduct* _product;
	NSMutableArray* _setupFields;
	NSString* _subtitle;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSMutableArray * setupFields;                                 //@synthesize setupFields=_setupFields - In the implementation block
@property (nonatomic,readonly) BOOL hasProduct; 
@property (nonatomic,retain) NPKProtoStandalonePaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
+(Class)setupFieldsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)subtitle;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(BOOL)hasSubtitle;
-(void)setProduct:(NPKProtoStandalonePaymentSetupProduct *)arg1 ;
-(NPKProtoStandalonePaymentSetupProduct *)product;
-(BOOL)hasProduct;
-(void)setSetupFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)setupFields;
-(void)addSetupFields:(id)arg1 ;
-(unsigned long long)setupFieldsCount;
-(void)clearSetupFields;
-(id)setupFieldsAtIndex:(unsigned long long)arg1 ;
@end

