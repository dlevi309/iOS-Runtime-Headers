/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXPBAppDirectoryEvent : PBCodable <NSCopying> {

	unsigned long long _bundleIndex;
	unsigned long long _categoryID;
	unsigned long long _categoryIndex;
	double _date;
	unsigned long long _eventType;
	unsigned long long _searchQueryLength;
	unsigned long long _searchTab;
	NSString* _bundleId;
	SCD_Struct_AT6 _has;

}

@property (assign,nonatomic) BOOL hasDate; 
@property (assign,nonatomic) double date;                                       //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasEventType; 
@property (assign,nonatomic) unsigned long long eventType;                      //@synthesize eventType=_eventType - In the implementation block
@property (assign,nonatomic) BOOL hasCategoryID; 
@property (assign,nonatomic) unsigned long long categoryID;                     //@synthesize categoryID=_categoryID - In the implementation block
@property (assign,nonatomic) BOOL hasCategoryIndex; 
@property (assign,nonatomic) unsigned long long categoryIndex;                  //@synthesize categoryIndex=_categoryIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                               //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasBundleIndex; 
@property (assign,nonatomic) unsigned long long bundleIndex;                    //@synthesize bundleIndex=_bundleIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSearchQueryLength; 
@property (assign,nonatomic) unsigned long long searchQueryLength;              //@synthesize searchQueryLength=_searchQueryLength - In the implementation block
@property (assign,nonatomic) BOOL hasSearchTab; 
@property (assign,nonatomic) unsigned long long searchTab;                      //@synthesize searchTab=_searchTab - In the implementation block
-(void)setHasEventType:(BOOL)arg1 ;
-(BOOL)hasEventType;
-(id)dictionaryRepresentation;
-(BOOL)hasDate;
-(void)setEventType:(unsigned long long)arg1 ;
-(unsigned long long)eventType;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setCategoryIndex:(unsigned long long)arg1 ;
-(BOOL)hasBundleId;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)description;
-(void)setCategoryID:(unsigned long long)arg1 ;
-(void)setHasDate:(BOOL)arg1 ;
-(unsigned long long)categoryIndex;
-(unsigned long long)categoryID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(double)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)bundleIndex;
-(unsigned long long)searchQueryLength;
-(unsigned long long)searchTab;
-(void)setHasCategoryID:(BOOL)arg1 ;
-(BOOL)hasCategoryID;
-(void)setHasCategoryIndex:(BOOL)arg1 ;
-(BOOL)hasCategoryIndex;
-(void)setBundleIndex:(unsigned long long)arg1 ;
-(void)setHasBundleIndex:(BOOL)arg1 ;
-(BOOL)hasBundleIndex;
-(void)setSearchQueryLength:(unsigned long long)arg1 ;
-(void)setHasSearchQueryLength:(BOOL)arg1 ;
-(BOOL)hasSearchQueryLength;
-(void)setSearchTab:(unsigned long long)arg1 ;
-(void)setHasSearchTab:(BOOL)arg1 ;
-(BOOL)hasSearchTab;
@end

