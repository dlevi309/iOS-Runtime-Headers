/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDLabelLocalizations : PBCodable <NSCopying> {

	NSMutableArray* _localizedStrings;

}

@property (nonatomic,retain) NSMutableArray * localizedStrings; 
+(BOOL)isValid:(id)arg1 ;
+(Class)localizedStringType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)localizedStrings;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)localizedStringsCount;
-(void)clearLocalizedStrings;
-(void)setLocalizedStrings:(NSMutableArray *)arg1 ;
-(id)bestLocalizedName;
-(void)addLocalizedString:(id)arg1 ;
-(id)localizedStringAtIndex:(unsigned long long)arg1 ;
@end

