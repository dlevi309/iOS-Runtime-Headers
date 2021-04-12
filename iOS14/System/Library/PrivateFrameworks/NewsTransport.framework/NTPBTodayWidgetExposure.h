/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying> {

	long long _contentFetchDate;
	NSString* _contentId;
	int _widgetAppearanceType;
	int _widgetArticleCount;
	int _widgetHeadlineExposureCount;
	NSString* _widgetIdentifier;
	NSMutableArray* _widgetPersonalizationFeatureCTRPairs;
	NSMutableArray* _widgetSectionsArticleCountPairs;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasWidgetArticleCount; 
@property (assign,nonatomic) int widgetArticleCount;                                             //@synthesize widgetArticleCount=_widgetArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetHeadlineExposureCount; 
@property (assign,nonatomic) int widgetHeadlineExposureCount;                                    //@synthesize widgetHeadlineExposureCount=_widgetHeadlineExposureCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * widgetSectionsArticleCountPairs;                   //@synthesize widgetSectionsArticleCountPairs=_widgetSectionsArticleCountPairs - In the implementation block
@property (nonatomic,retain) NSMutableArray * widgetPersonalizationFeatureCTRPairs;              //@synthesize widgetPersonalizationFeatureCTRPairs=_widgetPersonalizationFeatureCTRPairs - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetAppearanceType; 
@property (assign,nonatomic) int widgetAppearanceType;                                           //@synthesize widgetAppearanceType=_widgetAppearanceType - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetIdentifier; 
@property (nonatomic,retain) NSString * widgetIdentifier;                                        //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasContentFetchDate; 
@property (assign,nonatomic) long long contentFetchDate;                                         //@synthesize contentFetchDate=_contentFetchDate - In the implementation block
@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                                               //@synthesize contentId=_contentId - In the implementation block
+(Class)widgetSectionsArticleCountPairType;
+(Class)widgetPersonalizationFeatureCTRPairType;
-(id)dictionaryRepresentation;
-(NSString *)contentId;
-(NSString *)widgetIdentifier;
-(void)setContentId:(NSString *)arg1 ;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasWidgetIdentifier;
-(id)description;
-(void)addWidgetSectionsArticleCountPair:(id)arg1 ;
-(void)addWidgetPersonalizationFeatureCTRPair:(id)arg1 ;
-(void)setWidgetHeadlineExposureCount:(int)arg1 ;
-(void)setHasWidgetHeadlineExposureCount:(BOOL)arg1 ;
-(BOOL)hasWidgetHeadlineExposureCount;
-(void)clearWidgetSectionsArticleCountPairs;
-(unsigned long long)widgetSectionsArticleCountPairsCount;
-(id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)arg1 ;
-(void)clearWidgetPersonalizationFeatureCTRPairs;
-(unsigned long long)widgetPersonalizationFeatureCTRPairsCount;
-(id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)arg1 ;
-(int)widgetAppearanceType;
-(void)setWidgetAppearanceType:(int)arg1 ;
-(void)setHasWidgetAppearanceType:(BOOL)arg1 ;
-(BOOL)hasWidgetAppearanceType;
-(int)widgetHeadlineExposureCount;
-(NSMutableArray *)widgetSectionsArticleCountPairs;
-(void)setWidgetSectionsArticleCountPairs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)widgetPersonalizationFeatureCTRPairs;
-(void)setWidgetPersonalizationFeatureCTRPairs:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasContentId;
-(void)setWidgetArticleCount:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCount;
-(void)setContentFetchDate:(long long)arg1 ;
-(void)setHasContentFetchDate:(BOOL)arg1 ;
-(BOOL)hasContentFetchDate;
-(int)widgetArticleCount;
-(long long)contentFetchDate;
-(BOOL)isEqual:(id)arg1 ;
@end

