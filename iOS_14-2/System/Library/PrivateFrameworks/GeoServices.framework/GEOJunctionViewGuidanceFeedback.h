/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying> {

	NSMutableArray* _imageIDs;
	BOOL _imageDisplayed;
	SCD_Struct_GE127 _flags;

}

@property (assign,nonatomic) BOOL hasImageDisplayed; 
@property (assign,nonatomic) BOOL imageDisplayed; 
@property (nonatomic,retain) NSMutableArray * imageIDs; 
+(Class)imageIDType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSMutableArray *)imageIDs;
-(void)setImageDisplayed:(BOOL)arg1 ;
-(void)addImageID:(id)arg1 ;
-(unsigned long long)imageIDsCount;
-(void)clearImageIDs;
-(id)imageIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)imageDisplayed;
-(void)setHasImageDisplayed:(BOOL)arg1 ;
-(BOOL)hasImageDisplayed;
-(void)setImageIDs:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

