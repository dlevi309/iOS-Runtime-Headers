/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (nonatomic,readonly) BOOL hasCompletion; 
@property (nonatomic,retain) NSString * completion; 
@property (assign,nonatomic) BOOL hasTapBehavior; 
@property (assign,nonatomic) int tapBehavior; 
@property (assign,nonatomic) BOOL hasShowIntermediateStateTapBehaviorListView; 
@property (assign,nonatomic) BOOL showIntermediateStateTapBehaviorListView; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCompletion:(NSString *)arg1 ;
-(NSString *)completion;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasCompletion;
-(int)tapBehavior;
-(void)setTapBehavior:(int)arg1 ;
-(void)setHasTapBehavior:(BOOL)arg1 ;
-(BOOL)hasTapBehavior;
-(id)tapBehaviorAsString:(int)arg1 ;
-(int)StringAsTapBehavior:(id)arg1 ;
-(BOOL)showIntermediateStateTapBehaviorListView;
-(void)setShowIntermediateStateTapBehaviorListView:(BOOL)arg1 ;
-(void)setHasShowIntermediateStateTapBehaviorListView:(BOOL)arg1 ;
-(BOOL)hasShowIntermediateStateTapBehaviorListView;
@end

