/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable <NSCopying> {

	float _ingestionProgress;
	int _ingestionState;
	NSString* _physicalCardImageURL;
	NSString* _subtitle;
	NSString* _title;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,readonly) BOOL hasPhysicalCardImageURL; 
@property (nonatomic,retain) NSString * physicalCardImageURL;              //@synthesize physicalCardImageURL=_physicalCardImageURL - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL hasIngestionState; 
@property (assign,nonatomic) int ingestionState;                           //@synthesize ingestionState=_ingestionState - In the implementation block
@property (assign,nonatomic) BOOL hasIngestionProgress; 
@property (assign,nonatomic) float ingestionProgress;                      //@synthesize ingestionProgress=_ingestionProgress - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSubtitle;
-(id)description;
-(int)ingestionState;
-(void)setIngestionState:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(float)ingestionProgress;
-(void)setIngestionProgress:(float)arg1 ;
-(NSString *)physicalCardImageURL;
-(void)setPhysicalCardImageURL:(NSString *)arg1 ;
-(BOOL)hasPhysicalCardImageURL;
-(void)setHasIngestionState:(BOOL)arg1 ;
-(BOOL)hasIngestionState;
-(id)ingestionStateAsString:(int)arg1 ;
-(int)StringAsIngestionState:(id)arg1 ;
-(void)setHasIngestionProgress:(BOOL)arg1 ;
-(BOOL)hasIngestionProgress;
@end

