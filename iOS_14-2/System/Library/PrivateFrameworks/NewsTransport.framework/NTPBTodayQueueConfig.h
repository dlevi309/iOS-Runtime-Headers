/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBTodayQueueConfig : PBCodable <NSCopying> {

	unsigned long long _widgetVisibleSectionsLimit;
	NSMutableArray* _todaySectionConfigs;
	SCD_Struct_NT3 _has;

}

@property (nonatomic,retain) NSMutableArray * todaySectionConfigs;                       //@synthesize todaySectionConfigs=_todaySectionConfigs - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetVisibleSectionsLimit; 
@property (assign,nonatomic) unsigned long long widgetVisibleSectionsLimit;              //@synthesize widgetVisibleSectionsLimit=_widgetVisibleSectionsLimit - In the implementation block
+(Class)todaySectionConfigsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setTodaySectionConfigs:(NSMutableArray *)arg1 ;
-(void)clearTodaySectionConfigs;
-(unsigned long long)todaySectionConfigsCount;
-(id)todaySectionConfigsAtIndex:(unsigned long long)arg1 ;
-(void)setHasWidgetVisibleSectionsLimit:(BOOL)arg1 ;
-(BOOL)hasWidgetVisibleSectionsLimit;
-(NSMutableArray *)todaySectionConfigs;
-(unsigned long long)widgetVisibleSectionsLimit;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWidgetVisibleSectionsLimit:(unsigned long long)arg1 ;
-(void)addTodaySectionConfigs:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

