/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBCoverArticleWidgetExposure : PBCodable <NSCopying> {

	int _coverArticleWidgetArticleCount;
	NSData* _coverArticleWidgetExposureSessionId;
	NSData* _feedViewExposureId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasCoverArticleWidgetExposureSessionId; 
@property (nonatomic,retain) NSData * coverArticleWidgetExposureSessionId;               //@synthesize coverArticleWidgetExposureSessionId=_coverArticleWidgetExposureSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasCoverArticleWidgetArticleCount; 
@property (assign,nonatomic) int coverArticleWidgetArticleCount;                         //@synthesize coverArticleWidgetArticleCount=_coverArticleWidgetArticleCount - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
-(BOOL)hasFeedViewExposureId;
-(id)dictionaryRepresentation;
-(NSData *)feedViewExposureId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)setCoverArticleWidgetArticleCount:(int)arg1 ;
-(void)setHasCoverArticleWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasCoverArticleWidgetArticleCount;
-(int)coverArticleWidgetArticleCount;
-(void)mergeFrom:(id)arg1 ;
-(void)setCoverArticleWidgetExposureSessionId:(NSData *)arg1 ;
-(BOOL)hasCoverArticleWidgetExposureSessionId;
-(NSData *)coverArticleWidgetExposureSessionId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

