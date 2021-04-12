/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBTodayWidgetSession : PBCodable <NSCopying> {

	SCD_Struct_NT9* _countOfArticlesExposedPerSections;
	NSMutableArray* _countOfArticlesExposedEachSections;
	int _widgetArticleCount;
	NSMutableArray* _widgetSectionIdsExposeds;
	int _widgetSectionsExposed;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasWidgetArticleCount; 
@property (assign,nonatomic) int widgetArticleCount;                                                   //@synthesize widgetArticleCount=_widgetArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionsExposed; 
@property (assign,nonatomic) int widgetSectionsExposed;                                                //@synthesize widgetSectionsExposed=_widgetSectionsExposed - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfArticlesExposedPerSectionsCount; 
@property (nonatomic,readonly) int* countOfArticlesExposedPerSections; 
@property (nonatomic,retain) NSMutableArray * widgetSectionIdsExposeds;                                //@synthesize widgetSectionIdsExposeds=_widgetSectionIdsExposeds - In the implementation block
@property (nonatomic,retain) NSMutableArray * countOfArticlesExposedEachSections;                      //@synthesize countOfArticlesExposedEachSections=_countOfArticlesExposedEachSections - In the implementation block
+(Class)widgetSectionIdsExposedType;
+(Class)countOfArticlesExposedEachSectionType;
-(void)dealloc;
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
-(unsigned long long)countOfArticlesExposedEachSectionsCount;
-(id)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1 ;
-(void)addCountOfArticlesExposedEachSection:(id)arg1 ;
-(NSMutableArray *)countOfArticlesExposedEachSections;
-(void)clearCountOfArticlesExposedEachSections;
-(void)addWidgetSectionIdsExposed:(id)arg1 ;
-(unsigned long long)countOfArticlesExposedPerSectionsCount;
-(int)countOfArticlesExposedPerSectionAtIndex:(unsigned long long)arg1 ;
-(void)addCountOfArticlesExposedPerSection:(int)arg1 ;
-(void)setWidgetSectionsExposed:(int)arg1 ;
-(void)setHasWidgetSectionsExposed:(BOOL)arg1 ;
-(BOOL)hasWidgetSectionsExposed;
-(int*)countOfArticlesExposedPerSections;
-(void)clearCountOfArticlesExposedPerSections;
-(void)setCountOfArticlesExposedPerSections:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearWidgetSectionIdsExposeds;
-(unsigned long long)widgetSectionIdsExposedsCount;
-(id)widgetSectionIdsExposedAtIndex:(unsigned long long)arg1 ;
-(int)widgetSectionsExposed;
-(NSMutableArray *)widgetSectionIdsExposeds;
-(void)setWidgetSectionIdsExposeds:(NSMutableArray *)arg1 ;
-(void)setCountOfArticlesExposedEachSections:(NSMutableArray *)arg1 ;
@end

