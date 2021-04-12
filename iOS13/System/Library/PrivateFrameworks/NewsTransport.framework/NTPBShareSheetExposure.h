/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                            //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                  //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasShareSheetExposureLocation; 
@property (assign,nonatomic) int shareSheetExposureLocation;                  //@synthesize shareSheetExposureLocation=_shareSheetExposureLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)contentType;
-(void)setContentType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)contentId;
-(void)setContentId:(NSString *)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasReferencedArticleId;
-(NSString *)referencedArticleId;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(id)contentTypeAsString:(int)arg1 ;
-(int)StringAsContentType:(id)arg1 ;
-(BOOL)hasContentId;
-(int)shareSheetExposureLocation;
-(void)setShareSheetExposureLocation:(int)arg1 ;
-(void)setHasShareSheetExposureLocation:(BOOL)arg1 ;
-(BOOL)hasShareSheetExposureLocation;
@end

