/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBPaidSubscriptionSheetIapFail : PBCodable <NSCopying> {

	NSString* _articleId;
	NSString* _failedIapId;
	NSString* _sourceChannelId;

}

@property (nonatomic,readonly) BOOL hasFailedIapId; 
@property (nonatomic,retain) NSString * failedIapId;                  //@synthesize failedIapId=_failedIapId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                    //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasFailedIapId;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setFailedIapId:(NSString *)arg1 ;
-(NSString *)failedIapId;
-(id)description;
-(NSString *)articleId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

