/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBArticleListTodaySectionSpecificConfig : PBCodable <NSCopying> {

	NSString* _articleListID;

}

@property (nonatomic,readonly) BOOL hasArticleListID; 
@property (nonatomic,retain) NSString * articleListID;              //@synthesize articleListID=_articleListID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)articleListID;
-(void)setArticleListID:(NSString *)arg1 ;
-(BOOL)hasArticleListID;
@end

