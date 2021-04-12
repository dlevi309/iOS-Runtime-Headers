/*
* Generated on Thursday, January 14, 2021 at 2:24:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADSegmentUpdateResponse : PBCodable <NSCopying> {

	double _maxSegmentUpdateIntervalInSeconds;
	double _segmentRefreshIntervalInSeconds;
	NSString* _idDebug;
	SCD_Struct_AD11 _has;

}

@property (nonatomic,readonly) BOOL hasIdDebug; 
@property (nonatomic,retain) NSString * idDebug;                                     //@synthesize idDebug=_idDebug - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentRefreshIntervalInSeconds; 
@property (assign,nonatomic) double segmentRefreshIntervalInSeconds;                 //@synthesize segmentRefreshIntervalInSeconds=_segmentRefreshIntervalInSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasMaxSegmentUpdateIntervalInSeconds; 
@property (assign,nonatomic) double maxSegmentUpdateIntervalInSeconds;               //@synthesize maxSegmentUpdateIntervalInSeconds=_maxSegmentUpdateIntervalInSeconds - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)idDebug;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIdDebug:(NSString *)arg1 ;
-(BOOL)hasIdDebug;
-(void)setSegmentRefreshIntervalInSeconds:(double)arg1 ;
-(void)setHasSegmentRefreshIntervalInSeconds:(BOOL)arg1 ;
-(BOOL)hasSegmentRefreshIntervalInSeconds;
-(void)setMaxSegmentUpdateIntervalInSeconds:(double)arg1 ;
-(void)setHasMaxSegmentUpdateIntervalInSeconds:(BOOL)arg1 ;
-(BOOL)hasMaxSegmentUpdateIntervalInSeconds;
-(double)segmentRefreshIntervalInSeconds;
-(double)maxSegmentUpdateIntervalInSeconds;
@end

