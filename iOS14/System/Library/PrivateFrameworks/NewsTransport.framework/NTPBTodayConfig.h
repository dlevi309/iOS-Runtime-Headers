/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTodayConfig : PBCodable <NSCopying> {

	long long _widgetSystemReloadInterval;
	long long _widgetSystemReloadJitterMax;
	NSString* _audioIndicatorColor;
	NSString* _backgroundColorDark;
	NSString* _backgroundColorLight;
	NSMutableArray* _todayQueueConfigs;
	NSString* _widgetIdentifier;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,retain) NSMutableArray * todayQueueConfigs;                 //@synthesize todayQueueConfigs=_todayQueueConfigs - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColorLight; 
@property (nonatomic,retain) NSString * backgroundColorLight;                    //@synthesize backgroundColorLight=_backgroundColorLight - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColorDark; 
@property (nonatomic,retain) NSString * backgroundColorDark;                     //@synthesize backgroundColorDark=_backgroundColorDark - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetIdentifier; 
@property (nonatomic,retain) NSString * widgetIdentifier;                        //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAudioIndicatorColor; 
@property (nonatomic,retain) NSString * audioIndicatorColor;                     //@synthesize audioIndicatorColor=_audioIndicatorColor - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSystemReloadInterval; 
@property (assign,nonatomic) long long widgetSystemReloadInterval;               //@synthesize widgetSystemReloadInterval=_widgetSystemReloadInterval - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSystemReloadJitterMax; 
@property (assign,nonatomic) long long widgetSystemReloadJitterMax;              //@synthesize widgetSystemReloadJitterMax=_widgetSystemReloadJitterMax - In the implementation block
+(Class)todayQueueConfigsType;
-(id)dictionaryRepresentation;
-(NSString *)widgetIdentifier;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(long long)widgetSystemReloadInterval;
-(void)mergeFrom:(id)arg1 ;
-(void)setTodayQueueConfigs:(NSMutableArray *)arg1 ;
-(void)clearTodayQueueConfigs;
-(unsigned long long)todayQueueConfigsCount;
-(id)todayQueueConfigsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasBackgroundColorLight;
-(BOOL)hasBackgroundColorDark;
-(BOOL)hasWidgetIdentifier;
-(BOOL)hasAudioIndicatorColor;
-(void)setWidgetSystemReloadInterval:(long long)arg1 ;
-(void)setHasWidgetSystemReloadInterval:(BOOL)arg1 ;
-(BOOL)hasWidgetSystemReloadInterval;
-(void)setWidgetSystemReloadJitterMax:(long long)arg1 ;
-(void)setHasWidgetSystemReloadJitterMax:(BOOL)arg1 ;
-(BOOL)hasWidgetSystemReloadJitterMax;
-(NSMutableArray *)todayQueueConfigs;
-(NSString *)backgroundColorLight;
-(NSString *)backgroundColorDark;
-(NSString *)audioIndicatorColor;
-(id)description;
-(long long)widgetSystemReloadJitterMax;
-(void)setBackgroundColorDark:(NSString *)arg1 ;
-(void)setAudioIndicatorColor:(NSString *)arg1 ;
-(void)addTodayQueueConfigs:(id)arg1 ;
-(void)setBackgroundColorLight:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

