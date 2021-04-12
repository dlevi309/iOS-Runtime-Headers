/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOSignGuidanceFeedback : PBCodable <NSCopying> {

	int _signDetailIndex;
	int _signTitleIndex;
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasSignTitleIndex; 
@property (assign,nonatomic) int signTitleIndex; 
@property (assign,nonatomic) BOOL hasSignDetailIndex; 
@property (assign,nonatomic) int signDetailIndex; 
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
-(void)readAll:(BOOL)arg1 ;
-(int)signTitleIndex;
-(void)setSignTitleIndex:(int)arg1 ;
-(void)setHasSignTitleIndex:(BOOL)arg1 ;
-(BOOL)hasSignTitleIndex;
-(int)signDetailIndex;
-(void)setSignDetailIndex:(int)arg1 ;
-(void)setHasSignDetailIndex:(BOOL)arg1 ;
-(BOOL)hasSignDetailIndex;
@end

