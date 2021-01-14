/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EDPBModelFeaturesPromotion : PBCodable <NSCopying> {

	unsigned _headerKeyFilteredCount;
	NSString* _language;
	unsigned _toCount;
	unsigned _unknownFeatureCount;
	SCD_Struct_ED5 _has;

}

@property (assign,nonatomic) BOOL hasUnknownFeatureCount; 
@property (assign,nonatomic) unsigned unknownFeatureCount;                 //@synthesize unknownFeatureCount=_unknownFeatureCount - In the implementation block
@property (assign,nonatomic) BOOL hasToCount; 
@property (assign,nonatomic) unsigned toCount;                             //@synthesize toCount=_toCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasHeaderKeyFilteredCount; 
@property (assign,nonatomic) unsigned headerKeyFilteredCount;              //@synthesize headerKeyFilteredCount=_headerKeyFilteredCount - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasLanguage;
-(void)setLanguage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(unsigned)toCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUnknownFeatureCount:(unsigned)arg1 ;
-(void)setHasUnknownFeatureCount:(BOOL)arg1 ;
-(BOOL)hasUnknownFeatureCount;
-(unsigned)unknownFeatureCount;
-(void)setToCount:(unsigned)arg1 ;
-(void)setHasToCount:(BOOL)arg1 ;
-(BOOL)hasToCount;
-(void)setHeaderKeyFilteredCount:(unsigned)arg1 ;
-(void)setHasHeaderKeyFilteredCount:(BOOL)arg1 ;
-(BOOL)hasHeaderKeyFilteredCount;
-(unsigned)headerKeyFilteredCount;
@end

