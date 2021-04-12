/*
* Generated on Monday, March 1, 2021 at 2:32:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasCoverArticleWidgetExposureSessionId; 
@property (nonatomic,retain) NSData * coverArticleWidgetExposureSessionId;               //@synthesize coverArticleWidgetExposureSessionId=_coverArticleWidgetExposureSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasCoverArticleWidgetArticleCount; 
@property (assign,nonatomic) int coverArticleWidgetArticleCount;                         //@synthesize coverArticleWidgetArticleCount=_coverArticleWidgetArticleCount - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setCoverArticleWidgetArticleCount:(int)arg1 ;
-(void)setHasCoverArticleWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasCoverArticleWidgetArticleCount;
-(int)coverArticleWidgetArticleCount;
-(void)setCoverArticleWidgetExposureSessionId:(NSData *)arg1 ;
-(BOOL)hasCoverArticleWidgetExposureSessionId;
-(NSData *)coverArticleWidgetExposureSessionId;
@end

