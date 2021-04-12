/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSegmentRefreshIntervalInSeconds;
-(double)segmentRefreshIntervalInSeconds;
-(BOOL)hasMaxSegmentUpdateIntervalInSeconds;
-(double)maxSegmentUpdateIntervalInSeconds;
-(void)setIdDebug:(NSString *)arg1 ;
-(BOOL)hasIdDebug;
-(void)setSegmentRefreshIntervalInSeconds:(double)arg1 ;
-(void)setHasSegmentRefreshIntervalInSeconds:(BOOL)arg1 ;
-(void)setMaxSegmentUpdateIntervalInSeconds:(double)arg1 ;
-(void)setHasMaxSegmentUpdateIntervalInSeconds:(BOOL)arg1 ;
-(NSString *)idDebug;
@end

