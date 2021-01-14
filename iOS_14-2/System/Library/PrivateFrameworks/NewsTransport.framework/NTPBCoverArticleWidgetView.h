/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying> {

	int _coverArticleWidgetArticleCount;
	NSData* _coverArticleWidgetViewingSessionId;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,readonly) BOOL hasCoverArticleWidgetViewingSessionId; 
@property (nonatomic,retain) NSData * coverArticleWidgetViewingSessionId;               //@synthesize coverArticleWidgetViewingSessionId=_coverArticleWidgetViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasCoverArticleWidgetArticleCount; 
@property (assign,nonatomic) int coverArticleWidgetArticleCount;                        //@synthesize coverArticleWidgetArticleCount=_coverArticleWidgetArticleCount - In the implementation block
-(id)dictionaryRepresentation;
-(void)setCoverArticleWidgetViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasCoverArticleWidgetViewingSessionId;
-(void)setCoverArticleWidgetArticleCount:(int)arg1 ;
-(void)setHasCoverArticleWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasCoverArticleWidgetArticleCount;
-(NSData *)coverArticleWidgetViewingSessionId;
-(int)coverArticleWidgetArticleCount;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

