/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMagicalMomentsPBMMShownTracker : PBCodable <NSCopying> {

	NSString* _abGroup;
	int _anchor;
	NSString* _bundleId;
	SCD_Struct_AT4 _has;

}

@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) int anchor;                       //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;               //@synthesize abGroup=_abGroup - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)anchor;
-(void)setAnchor:(int)arg1 ;
-(BOOL)hasBundleId;
-(NSString *)abGroup;
-(BOOL)hasAnchor;
-(void)setHasAnchor:(BOOL)arg1 ;
-(id)anchorAsString:(int)arg1 ;
-(int)StringAsAnchor:(id)arg1 ;
-(BOOL)hasAbGroup;
-(void)setAbGroup:(NSString *)arg1 ;
@end

