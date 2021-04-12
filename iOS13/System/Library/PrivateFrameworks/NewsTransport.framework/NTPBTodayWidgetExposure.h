/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying> {

	int _widgetAppearanceType;
	int _widgetArticleCount;
	int _widgetHeadlineExposureCount;
	NSMutableArray* _widgetPersonalizationFeatureCTRPairs;
	NSMutableArray* _widgetSectionsArticleCountPairs;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasWidgetArticleCount; 
@property (assign,nonatomic) int widgetArticleCount;                                             //@synthesize widgetArticleCount=_widgetArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetHeadlineExposureCount; 
@property (assign,nonatomic) int widgetHeadlineExposureCount;                                    //@synthesize widgetHeadlineExposureCount=_widgetHeadlineExposureCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * widgetSectionsArticleCountPairs;                   //@synthesize widgetSectionsArticleCountPairs=_widgetSectionsArticleCountPairs - In the implementation block
@property (nonatomic,retain) NSMutableArray * widgetPersonalizationFeatureCTRPairs;              //@synthesize widgetPersonalizationFeatureCTRPairs=_widgetPersonalizationFeatureCTRPairs - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetAppearanceType; 
@property (assign,nonatomic) int widgetAppearanceType;                                           //@synthesize widgetAppearanceType=_widgetAppearanceType - In the implementation block
+(Class)widgetSectionsArticleCountPairType;
+(Class)widgetPersonalizationFeatureCTRPairType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWidgetArticleCount:(int)arg1 ;
-(void)setHasWidgetArticleCount:(BOOL)arg1 ;
-(BOOL)hasWidgetArticleCount;
-(int)widgetArticleCount;
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
@end

