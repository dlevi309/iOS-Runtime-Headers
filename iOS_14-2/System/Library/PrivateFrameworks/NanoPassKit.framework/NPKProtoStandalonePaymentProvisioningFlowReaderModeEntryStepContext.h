/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setProduct:(NPKProtoStandalonePaymentSetupProduct *)arg1 ;
-(BOOL)hasSubtitle;
-(id)description;
-(NPKProtoStandalonePaymentSetupProduct *)product;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasProduct;
-(void)setSetupFields:(NSMutableArray *)arg1 ;
-(NSMutableArray *)setupFields;
-(void)addSetupFields:(id)arg1 ;
-(unsigned long long)setupFieldsCount;
-(void)clearSetupFields;
-(id)setupFieldsAtIndex:(unsigned long long)arg1 ;
@end

