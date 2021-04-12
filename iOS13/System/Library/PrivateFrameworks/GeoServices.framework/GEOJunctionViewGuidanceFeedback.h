/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying> {

	NSMutableArray* _imageIDs;
	BOOL _imageDisplayed;
	SCD_Struct_GE99 _flags;

}

@property (assign,nonatomic) BOOL hasImageDisplayed; 
@property (assign,nonatomic) BOOL imageDisplayed; 
@property (nonatomic,retain) NSMutableArray * imageIDs; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imageIDType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSMutableArray *)imageIDs;
-(void)addImageID:(id)arg1 ;
-(unsigned long long)imageIDsCount;
-(void)clearImageIDs;
-(id)imageIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)imageDisplayed;
-(void)setImageDisplayed:(BOOL)arg1 ;
-(void)setHasImageDisplayed:(BOOL)arg1 ;
-(BOOL)hasImageDisplayed;
-(void)setImageIDs:(NSMutableArray *)arg1 ;
@end

