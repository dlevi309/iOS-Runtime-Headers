/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBMusicDataCollectionRecord : PBCodable <NSCopying> {

	double _quantizedScore;
	double _secondsFromUnixEpoch;
	int _algorithm;
	NSString* _label;
	NSString* _mediaId;
	int _mediaType;
	NSString* _sourceBundleId;
	int _type;
	SCD_Struct_PP9 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasSecondsFromUnixEpoch; 
@property (assign,nonatomic) double secondsFromUnixEpoch;               //@synthesize secondsFromUnixEpoch=_secondsFromUnixEpoch - In the implementation block
@property (assign,nonatomic) BOOL hasQuantizedScore; 
@property (assign,nonatomic) double quantizedScore;                     //@synthesize quantizedScore=_quantizedScore - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceBundleId; 
@property (nonatomic,retain) NSString * sourceBundleId;                 //@synthesize sourceBundleId=_sourceBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaId; 
@property (nonatomic,retain) NSString * mediaId;                        //@synthesize mediaId=_mediaId - In the implementation block
@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                             //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL hasAlgorithm; 
@property (assign,nonatomic) int algorithm;                             //@synthesize algorithm=_algorithm - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(int)mediaType;
-(int)algorithm;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAlgorithm:(int)arg1 ;
-(BOOL)hasLabel;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setMediaType:(int)arg1 ;
-(BOOL)hasMediaType;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasAlgorithm;
-(void)setMediaId:(NSString *)arg1 ;
-(BOOL)hasMediaId;
-(NSString *)mediaId;
-(void)setHasAlgorithm:(BOOL)arg1 ;
-(void)setSecondsFromUnixEpoch:(double)arg1 ;
-(void)setHasSecondsFromUnixEpoch:(BOOL)arg1 ;
-(BOOL)hasSecondsFromUnixEpoch;
-(void)setQuantizedScore:(double)arg1 ;
-(void)setHasQuantizedScore:(BOOL)arg1 ;
-(BOOL)hasQuantizedScore;
-(BOOL)hasSourceBundleId;
-(double)secondsFromUnixEpoch;
-(double)quantizedScore;
-(NSString *)sourceBundleId;
-(void)setSourceBundleId:(NSString *)arg1 ;
@end

