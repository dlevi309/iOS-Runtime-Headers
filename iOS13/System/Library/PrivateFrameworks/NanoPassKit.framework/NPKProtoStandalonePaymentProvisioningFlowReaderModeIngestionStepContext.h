/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)ingestionState;
-(void)setIngestionState:(int)arg1 ;
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

