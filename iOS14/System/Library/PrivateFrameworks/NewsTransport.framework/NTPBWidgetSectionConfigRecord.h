/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBRecordBase, NSString;

@interface NTPBWidgetSectionConfigRecord : PBCodable <NSCopying> {

	NSMutableArray* _articleIDs2s;
	NSMutableArray* _articleListIDs2s;
	NTPBRecordBase* _base;
	NSString* _configuration2;
	NSString* _singleTagConfiguration;

}

@property (nonatomic,retain) NSMutableArray * articleIDs2; 
@property (nonatomic,retain) NSMutableArray * articleListIDs2; 
@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                          //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasConfiguration2; 
@property (nonatomic,retain) NSString * configuration2;                      //@synthesize configuration2=_configuration2 - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleListIDs2s;              //@synthesize articleListIDs2s=_articleListIDs2s - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIDs2s;                  //@synthesize articleIDs2s=_articleIDs2s - In the implementation block
@property (nonatomic,readonly) BOOL hasSingleTagConfiguration; 
@property (nonatomic,retain) NSString * singleTagConfiguration;              //@synthesize singleTagConfiguration=_singleTagConfiguration - In the implementation block
+(Class)articleListIDs2Type;
+(Class)articleIDs2Type;
-(NSMutableArray *)articleListIDs2;
-(void)setArticleListIDs2:(NSMutableArray *)arg1 ;
-(NSMutableArray *)articleIDs2;
-(void)setArticleIDs2:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(NSString *)configuration2;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)articleIDs2s;
-(NSMutableArray *)articleListIDs2s;
-(id)description;
-(void)setArticleListIDs2s:(NSMutableArray *)arg1 ;
-(void)setArticleIDs2s:(NSMutableArray *)arg1 ;
-(void)setConfiguration2:(NSString *)arg1 ;
-(void)setSingleTagConfiguration:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addArticleListIDs2:(id)arg1 ;
-(void)addArticleIDs2:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasConfiguration2;
-(void)clearArticleListIDs2s;
-(unsigned long long)articleListIDs2sCount;
-(id)articleListIDs2AtIndex:(unsigned long long)arg1 ;
-(void)clearArticleIDs2s;
-(unsigned long long)articleIDs2sCount;
-(id)articleIDs2AtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSingleTagConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)singleTagConfiguration;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

