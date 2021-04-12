/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TRILogTreatment : PBCodable <NSCopying> {

	SCD_Struct_TR2* _namespaceIds;
	NSString* _experimentId;
	NSString* _treatmentId;

}

@property (nonatomic,readonly) BOOL hasExperimentId; 
@property (nonatomic,retain) NSString * experimentId;                             //@synthesize experimentId=_experimentId - In the implementation block
@property (nonatomic,readonly) BOOL hasTreatmentId; 
@property (nonatomic,retain) NSString * treatmentId;                              //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) unsigned long long namespaceIdsCount; 
@property (nonatomic,readonly) unsigned* namespaceIds; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasExperimentId;
-(NSString *)experimentId;
-(void)setExperimentId:(NSString *)arg1 ;
-(void)setTreatmentId:(NSString *)arg1 ;
-(BOOL)hasTreatmentId;
-(NSString *)treatmentId;
-(unsigned long long)namespaceIdsCount;
-(void)clearNamespaceIds;
-(unsigned)namespaceIdAtIndex:(unsigned long long)arg1 ;
-(void)addNamespaceId:(unsigned)arg1 ;
-(unsigned*)namespaceIds;
-(void)setNamespaceIds:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

