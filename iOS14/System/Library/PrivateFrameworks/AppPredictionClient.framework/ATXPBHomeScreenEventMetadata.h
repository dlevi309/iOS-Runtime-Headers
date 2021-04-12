/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ATXPBHomeScreenEventMetadata : PBCodable <NSCopying> {

	unsigned long long _pageIndex;
	NSMutableArray* _stackIds;
	NSMutableArray* _widgetIdentifiables;
	NSMutableArray* _widgetInStackIdentifiables;
	BOOL _isSuggestionInAddWidgetSheet;
	BOOL _isWidgetInTodayView;
	SCD_Struct_AT3 _has;

}

@property (assign,nonatomic) BOOL hasPageIndex; 
@property (assign,nonatomic) unsigned long long pageIndex;                             //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * stackIds;                                //@synthesize stackIds=_stackIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * widgetIdentifiables;                     //@synthesize widgetIdentifiables=_widgetIdentifiables - In the implementation block
@property (nonatomic,retain) NSMutableArray * widgetInStackIdentifiables;              //@synthesize widgetInStackIdentifiables=_widgetInStackIdentifiables - In the implementation block
@property (assign,nonatomic) BOOL hasIsSuggestionInAddWidgetSheet; 
@property (assign,nonatomic) BOOL isSuggestionInAddWidgetSheet;                        //@synthesize isSuggestionInAddWidgetSheet=_isSuggestionInAddWidgetSheet - In the implementation block
@property (assign,nonatomic) BOOL hasIsWidgetInTodayView; 
@property (assign,nonatomic) BOOL isWidgetInTodayView;                                 //@synthesize isWidgetInTodayView=_isWidgetInTodayView - In the implementation block
+(Class)stackIdsType;
+(Class)widgetIdentifiablesType;
+(Class)widgetInStackIdentifiablesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)pageIndex;
-(id)description;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)stackIds;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addStackIds:(id)arg1 ;
-(void)addWidgetIdentifiables:(id)arg1 ;
-(void)addWidgetInStackIdentifiables:(id)arg1 ;
-(unsigned long long)stackIdsCount;
-(void)clearStackIds;
-(id)stackIdsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)widgetIdentifiablesCount;
-(void)clearWidgetIdentifiables;
-(id)widgetIdentifiablesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)widgetInStackIdentifiablesCount;
-(void)clearWidgetInStackIdentifiables;
-(id)widgetInStackIdentifiablesAtIndex:(unsigned long long)arg1 ;
-(void)setHasPageIndex:(BOOL)arg1 ;
-(BOOL)hasPageIndex;
-(void)setIsSuggestionInAddWidgetSheet:(BOOL)arg1 ;
-(void)setHasIsSuggestionInAddWidgetSheet:(BOOL)arg1 ;
-(BOOL)hasIsSuggestionInAddWidgetSheet;
-(void)setIsWidgetInTodayView:(BOOL)arg1 ;
-(void)setHasIsWidgetInTodayView:(BOOL)arg1 ;
-(BOOL)hasIsWidgetInTodayView;
-(void)setStackIds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)widgetIdentifiables;
-(void)setWidgetIdentifiables:(NSMutableArray *)arg1 ;
-(NSMutableArray *)widgetInStackIdentifiables;
-(void)setWidgetInStackIdentifiables:(NSMutableArray *)arg1 ;
-(BOOL)isSuggestionInAddWidgetSheet;
-(BOOL)isWidgetInTodayView;
@end

