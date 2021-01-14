/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _completion;
	int _tapBehavior;
	BOOL _showIntermediateStateTapBehaviorListView;
	struct {
		unsigned has_tapBehavior : 1;
		unsigned has_showIntermediateStateTapBehaviorListView : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCompletion; 
@property (nonatomic,retain) NSString * completion; 
@property (assign,nonatomic) BOOL hasTapBehavior; 
@property (assign,nonatomic) int tapBehavior; 
@property (assign,nonatomic) BOOL hasShowIntermediateStateTapBehaviorListView; 
@property (assign,nonatomic) BOOL showIntermediateStateTapBehaviorListView; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)setCompletion:(NSString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setShowIntermediateStateTapBehaviorListView:(BOOL)arg1 ;
-(int)tapBehavior;
-(void)setHasTapBehavior:(BOOL)arg1 ;
-(BOOL)hasTapBehavior;
-(id)tapBehaviorAsString:(int)arg1 ;
-(int)StringAsTapBehavior:(id)arg1 ;
-(BOOL)showIntermediateStateTapBehaviorListView;
-(void)setHasShowIntermediateStateTapBehaviorListView:(BOOL)arg1 ;
-(BOOL)hasShowIntermediateStateTapBehaviorListView;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)completion;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTapBehavior:(int)arg1 ;
-(BOOL)hasCompletion;
@end

