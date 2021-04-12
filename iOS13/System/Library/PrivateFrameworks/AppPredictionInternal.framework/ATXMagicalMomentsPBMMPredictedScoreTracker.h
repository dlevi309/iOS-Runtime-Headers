/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMagicalMomentsPBMMPredictedScoreTracker : PBCodable <NSCopying> {

	NSString* _abGroup;
	int _anchor;
	NSString* _topBundleId;
	SCD_Struct_AT4 _has;

}

@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) int anchor;                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) BOOL hasTopBundleId; 
@property (nonatomic,retain) NSString * topBundleId;              //@synthesize topBundleId=_topBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;                  //@synthesize abGroup=_abGroup - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)anchor;
-(void)setAnchor:(int)arg1 ;
-(NSString *)abGroup;
-(BOOL)hasAnchor;
-(void)setHasAnchor:(BOOL)arg1 ;
-(id)anchorAsString:(int)arg1 ;
-(int)StringAsAnchor:(id)arg1 ;
-(BOOL)hasTopBundleId;
-(BOOL)hasAbGroup;
-(NSString *)topBundleId;
-(void)setTopBundleId:(NSString *)arg1 ;
-(void)setAbGroup:(NSString *)arg1 ;
@end

