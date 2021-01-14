/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)articleListID;
-(BOOL)hasArticleListID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setArticleListID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

