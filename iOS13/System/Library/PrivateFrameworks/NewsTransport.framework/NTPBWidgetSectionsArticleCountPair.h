/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBWidgetSectionsArticleCountPair : PBCodable <NSCopying> {

	SCD_Struct_NT18* _countOfArticlesExposedEachSections;
	NSString* _widgetSectionIdsExposed;

}

@property (nonatomic,readonly) BOOL hasWidgetSectionIdsExposed; 
@property (nonatomic,retain) NSString * widgetSectionIdsExposed;                                        //@synthesize widgetSectionIdsExposed=_widgetSectionIdsExposed - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfArticlesExposedEachSectionsCount; 
@property (nonatomic,readonly) long long* countOfArticlesExposedEachSections; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setWidgetSectionIdsExposed:(NSString *)arg1 ;
-(unsigned long long)countOfArticlesExposedEachSectionsCount;
-(long long)countOfArticlesExposedEachSectionAtIndex:(unsigned long long)arg1 ;
-(void)addCountOfArticlesExposedEachSection:(long long)arg1 ;
-(BOOL)hasWidgetSectionIdsExposed;
-(long long*)countOfArticlesExposedEachSections;
-(void)clearCountOfArticlesExposedEachSections;
-(void)setCountOfArticlesExposedEachSections:(long long*)arg1 count:(unsigned long long)arg2 ;
-(NSString *)widgetSectionIdsExposed;
@end

