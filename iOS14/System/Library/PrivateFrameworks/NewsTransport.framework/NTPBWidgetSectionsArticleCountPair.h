/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBWidgetSectionsArticleCountPair : PBCodable <NSCopying> {

	SCD_Struct_NT19* _countOfArticlesExposedEachSections;
	NSString* _widgetSectionIdsExposed;

}

@property (nonatomic,readonly) BOOL hasWidgetSectionIdsExposed; 
@property (nonatomic,retain) NSString * widgetSectionIdsExposed;                                        //@synthesize widgetSectionIdsExposed=_widgetSectionIdsExposed - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfArticlesExposedEachSectionsCount; 
@property (nonatomic,readonly) long long* countOfArticlesExposedEachSections; 
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setWidgetSectionIdsExposed:(NSString *)arg1 ;
-(unsigned long long)countOfArticlesExposedEachSectionsCount;
-(long long)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1 ;
-(void)addCountOfArticlesExposedEachSection:(long long)arg1 ;
-(BOOL)hasWidgetSectionIdsExposed;
-(long long*)countOfArticlesExposedEachSections;
-(void)clearCountOfArticlesExposedEachSections;
-(void)setCountOfArticlesExposedEachSections:(long long*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)widgetSectionIdsExposed;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

