/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBRecordBase, NSString;

@interface NTPBWidgetSectionConfigRecord : PBCodable <NSCopying> {

	NSMutableArray* _articleIDs;
	NSMutableArray* _articleIDs2s;
	NSMutableArray* _articleListIDs;
	NSMutableArray* _articleListIDs2s;
	NTPBRecordBase* _base;
	NSString* _configuration;
	NSString* _configuration2;

}

@property (nonatomic,retain) NSMutableArray * articleIDs2; 
@property (nonatomic,retain) NSMutableArray * articleListIDs2; 
@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                          //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasConfiguration; 
@property (nonatomic,retain) NSString * configuration;                       //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleListIDs;                //@synthesize articleListIDs=_articleListIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIDs;                    //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasConfiguration2; 
@property (nonatomic,retain) NSString * configuration2;                      //@synthesize configuration2=_configuration2 - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleListIDs2s;              //@synthesize articleListIDs2s=_articleListIDs2s - In the implementation block
@property (nonatomic,retain) NSMutableArray * articleIDs2s;                  //@synthesize articleIDs2s=_articleIDs2s - In the implementation block
+(Class)articleListIDsType;
+(Class)articleIDsType;
+(Class)articleListIDs2Type;
+(Class)articleIDs2Type;
-(NSMutableArray *)articleListIDs2;
-(void)setArticleListIDs2:(NSMutableArray *)arg1 ;
-(NSMutableArray *)articleIDs2;
-(void)setArticleIDs2:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setConfiguration:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)configuration;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(void)setArticleIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)articleIDs;
-(NSMutableArray *)articleListIDs2s;
-(void)setArticleListIDs2s:(NSMutableArray *)arg1 ;
-(NSMutableArray *)articleIDs2s;
-(void)setArticleIDs2s:(NSMutableArray *)arg1 ;
-(NSMutableArray *)articleListIDs;
-(void)setArticleListIDs:(NSMutableArray *)arg1 ;
-(BOOL)hasBase;
-(BOOL)hasConfiguration;
-(void)setConfiguration2:(NSString *)arg1 ;
-(void)addArticleListIDs:(id)arg1 ;
-(void)addArticleIDs:(id)arg1 ;
-(void)addArticleListIDs2:(id)arg1 ;
-(void)addArticleIDs2:(id)arg1 ;
-(void)clearArticleListIDs;
-(unsigned long long)articleListIDsCount;
-(id)articleListIDsAtIndex:(unsigned long long)arg1 ;
-(void)clearArticleIDs;
-(unsigned long long)articleIDsCount;
-(id)articleIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasConfiguration2;
-(void)clearArticleListIDs2s;
-(unsigned long long)articleListIDs2sCount;
-(id)articleListIDs2AtIndex:(unsigned long long)arg1 ;
-(void)clearArticleIDs2s;
-(unsigned long long)articleIDs2sCount;
-(id)articleIDs2AtIndex:(unsigned long long)arg1 ;
-(NSString *)configuration2;
@end

