/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableFHIRResourceForAPI, HDCodableSample;

@interface HDCodableClinicalRecord : PBCodable <HDDecoding, NSCopying> {

	NSString* _displayName;
	HDCodableFHIRResourceForAPI* _fHIRResource;
	HDCodableSample* _sample;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                                //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (nonatomic,retain) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasFHIRResource; 
@property (nonatomic,retain) HDCodableFHIRResourceForAPI * fHIRResource;              //@synthesize fHIRResource=_fHIRResource - In the implementation block
-(id)dictionaryRepresentation;
-(HDCodableSample *)sample;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setFHIRResource:(HDCodableFHIRResourceForAPI *)arg1 ;
-(HDCodableFHIRResourceForAPI *)fHIRResource;
-(BOOL)hasFHIRResource;
@end

