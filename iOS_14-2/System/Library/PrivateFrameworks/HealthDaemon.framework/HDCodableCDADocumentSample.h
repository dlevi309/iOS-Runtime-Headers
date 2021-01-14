/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, HDCodableSample;

@interface HDCodableCDADocumentSample : PBCodable <HDDecoding, NSCopying> {

	NSString* _authorName;
	NSString* _custodianName;
	NSData* _documentData;
	int _omittedContent;
	NSString* _patientName;
	HDCodableSample* _sample;
	NSString* _title;
	SCD_Struct_HD7 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;              //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasOmittedContent; 
@property (assign,nonatomic) int omittedContent;                    //@synthesize omittedContent=_omittedContent - In the implementation block
@property (nonatomic,readonly) BOOL hasDocumentData; 
@property (nonatomic,retain) NSData * documentData;                 //@synthesize documentData=_documentData - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasPatientName; 
@property (nonatomic,retain) NSString * patientName;                //@synthesize patientName=_patientName - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthorName; 
@property (nonatomic,retain) NSString * authorName;                 //@synthesize authorName=_authorName - In the implementation block
@property (nonatomic,readonly) BOOL hasCustodianName; 
@property (nonatomic,retain) NSString * custodianName;              //@synthesize custodianName=_custodianName - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableSample *)sample;
-(BOOL)hasTitle;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)authorName;
-(NSString *)custodianName;
-(NSString *)patientName;
-(void)mergeFrom:(id)arg1 ;
-(void)setAuthorName:(NSString *)arg1 ;
-(BOOL)hasAuthorName;
-(NSString *)description;
-(unsigned long long)hash;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)documentData;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(void)setOmittedContent:(int)arg1 ;
-(void)setDocumentData:(NSData *)arg1 ;
-(void)setPatientName:(NSString *)arg1 ;
-(void)setCustodianName:(NSString *)arg1 ;
-(int)omittedContent;
-(void)setHasOmittedContent:(BOOL)arg1 ;
-(BOOL)hasOmittedContent;
-(id)omittedContentAsString:(int)arg1 ;
-(int)StringAsOmittedContent:(id)arg1 ;
-(BOOL)hasDocumentData;
-(BOOL)hasPatientName;
-(BOOL)hasCustodianName;
@end

