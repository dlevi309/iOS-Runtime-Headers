/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCodableDatabaseCompetitionPreferredVictoryBadgeStyles : PBCodable <NSCopying> {

	SCD_Struct_AS3* _styles;

}

@property (nonatomic,readonly) unsigned long long stylesCount; 
@property (nonatomic,readonly) int* styles; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int*)styles;
-(unsigned long long)stylesCount;
-(void)clearStyles;
-(int)stylesAtIndex:(unsigned long long)arg1 ;
-(void)addStyles:(int)arg1 ;
-(void)setStyles:(int*)arg1 count:(unsigned long long)arg2 ;
@end

