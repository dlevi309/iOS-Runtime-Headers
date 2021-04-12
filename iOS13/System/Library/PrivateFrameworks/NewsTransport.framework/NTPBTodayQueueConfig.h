/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBTodayQueueConfig : PBCodable <NSCopying> {

	unsigned long long _widgetVisibleSectionsLimit;
	NSMutableArray* _todaySectionConfigs;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,retain) NSMutableArray * todaySectionConfigs;                       //@synthesize todaySectionConfigs=_todaySectionConfigs - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetVisibleSectionsLimit; 
@property (assign,nonatomic) unsigned long long widgetVisibleSectionsLimit;              //@synthesize widgetVisibleSectionsLimit=_widgetVisibleSectionsLimit - In the implementation block
+(Class)todaySectionConfigsType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWidgetVisibleSectionsLimit:(unsigned long long)arg1 ;
-(void)addTodaySectionConfigs:(id)arg1 ;
-(void)setTodaySectionConfigs:(NSMutableArray *)arg1 ;
-(void)clearTodaySectionConfigs;
-(unsigned long long)todaySectionConfigsCount;
-(id)todaySectionConfigsAtIndex:(unsigned long long)arg1 ;
-(void)setHasWidgetVisibleSectionsLimit:(BOOL)arg1 ;
-(BOOL)hasWidgetVisibleSectionsLimit;
-(NSMutableArray *)todaySectionConfigs;
-(unsigned long long)widgetVisibleSectionsLimit;
@end

