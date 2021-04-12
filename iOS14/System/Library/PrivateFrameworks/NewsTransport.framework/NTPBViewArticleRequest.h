/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBViewArticleRequest : PBRequest <NSCopying> {

	NSString* _feedUri;
	NSString* _storeFrontId;
	NSString* _webPageUri;

}

@property (nonatomic,readonly) BOOL hasWebPageUri; 
@property (nonatomic,retain) NSString * webPageUri;                //@synthesize webPageUri=_webPageUri - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedUri; 
@property (nonatomic,retain) NSString * feedUri;                   //@synthesize feedUri=_feedUri - In the implementation block
@property (nonatomic,readonly) BOOL hasStoreFrontId; 
@property (nonatomic,retain) NSString * storeFrontId;              //@synthesize storeFrontId=_storeFrontId - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)feedUri;
-(void)mergeFrom:(id)arg1 ;
-(void)setFeedUri:(NSString *)arg1 ;
-(BOOL)hasWebPageUri;
-(BOOL)hasFeedUri;
-(BOOL)hasStoreFrontId;
-(NSString *)webPageUri;
-(NSString *)storeFrontId;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setWebPageUri:(NSString *)arg1 ;
-(void)setStoreFrontId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

