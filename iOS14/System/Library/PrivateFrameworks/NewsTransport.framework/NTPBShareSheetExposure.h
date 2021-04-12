/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBShareSheetExposure : PBCodable <NSCopying> {

	NSString* _contentId;
	int _contentType;
	NSString* _referencedArticleId;
	int _shareSheetExposureLocation;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                            //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                  //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasShareSheetExposureLocation; 
@property (assign,nonatomic) int shareSheetExposureLocation;                  //@synthesize shareSheetExposureLocation=_shareSheetExposureLocation - In the implementation block
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)contentId;
-(void)setContentId:(NSString *)arg1 ;
-(id)contentTypeAsString:(int)arg1 ;
-(int)StringAsContentType:(id)arg1 ;
-(int)contentType;
-(NSString *)referencedArticleId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasReferencedArticleId;
-(id)description;
-(unsigned long long)hash;
-(int)shareSheetExposureLocation;
-(void)setShareSheetExposureLocation:(int)arg1 ;
-(void)setHasShareSheetExposureLocation:(BOOL)arg1 ;
-(BOOL)hasShareSheetExposureLocation;
-(void)setContentType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasContentId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(BOOL)isEqual:(id)arg1 ;
@end

