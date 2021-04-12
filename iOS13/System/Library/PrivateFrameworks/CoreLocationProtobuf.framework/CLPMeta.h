/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CLPMeta : PBCodable <NSCopying> {

	long long _submissionId;
	NSString* _probeId;
	NSString* _productId;
	NSString* _softwareVersion;
	SCD_Struct_CL3 _has;

}

@property (nonatomic,retain) NSString * productId;                    //@synthesize productId=_productId - In the implementation block
@property (nonatomic,retain) NSString * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
@property (assign,nonatomic) BOOL hasSubmissionId; 
@property (assign,nonatomic) long long submissionId;                  //@synthesize submissionId=_submissionId - In the implementation block
@property (nonatomic,readonly) BOOL hasProbeId; 
@property (nonatomic,retain) NSString * probeId;                      //@synthesize probeId=_probeId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)softwareVersion;
-(NSString *)productId;
-(void)setProductId:(NSString *)arg1 ;
-(void)setSoftwareVersion:(NSString *)arg1 ;
-(void)setProbeId:(NSString *)arg1 ;
-(void)setSubmissionId:(long long)arg1 ;
-(void)setHasSubmissionId:(BOOL)arg1 ;
-(BOOL)hasSubmissionId;
-(BOOL)hasProbeId;
-(long long)submissionId;
-(NSString *)probeId;
@end

