/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setFeedUri:(NSString *)arg1 ;
-(void)setWebPageUri:(NSString *)arg1 ;
-(void)setStoreFrontId:(NSString *)arg1 ;
-(BOOL)hasWebPageUri;
-(BOOL)hasFeedUri;
-(BOOL)hasStoreFrontId;
-(NSString *)webPageUri;
-(NSString *)feedUri;
-(NSString *)storeFrontId;
@end

