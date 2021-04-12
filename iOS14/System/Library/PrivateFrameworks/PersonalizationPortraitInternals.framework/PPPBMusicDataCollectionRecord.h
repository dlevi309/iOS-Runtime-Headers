/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_PP20 _has;

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
-(int)algorithm;
-(id)dictionaryRepresentation;
-(void)setHasAlgorithm:(BOOL)arg1 ;
-(void)setMediaId:(NSString *)arg1 ;
-(BOOL)hasAlgorithm;
-(void)setAlgorithm:(int)arg1 ;
-(void)setMediaType:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)mediaType;
-(BOOL)hasLabel;
-(BOOL)hasMediaId;
-(void)setHasMediaType:(BOOL)arg1 ;
-(BOOL)hasMediaType;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(NSString *)mediaId;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
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

