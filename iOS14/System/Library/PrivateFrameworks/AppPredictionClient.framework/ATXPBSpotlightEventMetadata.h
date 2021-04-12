/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXPBSpotlightEventMetadata : PBCodable <NSCopying> {

	unsigned long long _searchEngagedActionType;
	NSString* _queryAtEngagement;
	NSString* _searchEngagedBundleId;
	BOOL _didSearchDuringSession;
	SCD_Struct_AT5 _has;

}

@property (nonatomic,readonly) BOOL hasQueryAtEngagement; 
@property (nonatomic,retain) NSString * queryAtEngagement;                            //@synthesize queryAtEngagement=_queryAtEngagement - In the implementation block
@property (assign,nonatomic) BOOL hasDidSearchDuringSession; 
@property (assign,nonatomic) BOOL didSearchDuringSession;                             //@synthesize didSearchDuringSession=_didSearchDuringSession - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchEngagedBundleId; 
@property (nonatomic,retain) NSString * searchEngagedBundleId;                        //@synthesize searchEngagedBundleId=_searchEngagedBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasSearchEngagedActionType; 
@property (assign,nonatomic) unsigned long long searchEngagedActionType;              //@synthesize searchEngagedActionType=_searchEngagedActionType - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDidSearchDuringSession:(BOOL)arg1 ;
-(BOOL)didSearchDuringSession;
-(void)setQueryAtEngagement:(NSString *)arg1 ;
-(void)setSearchEngagedBundleId:(NSString *)arg1 ;
-(BOOL)hasQueryAtEngagement;
-(void)setHasDidSearchDuringSession:(BOOL)arg1 ;
-(BOOL)hasDidSearchDuringSession;
-(BOOL)hasSearchEngagedBundleId;
-(void)setSearchEngagedActionType:(unsigned long long)arg1 ;
-(void)setHasSearchEngagedActionType:(BOOL)arg1 ;
-(BOOL)hasSearchEngagedActionType;
-(NSString *)queryAtEngagement;
-(NSString *)searchEngagedBundleId;
-(unsigned long long)searchEngagedActionType;
@end

