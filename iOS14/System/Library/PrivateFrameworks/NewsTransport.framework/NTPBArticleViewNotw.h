/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBArticleViewNotw : PBCodable <NSCopying> {

	NSString* _articleId;
	int _articleViewType;
	float _maxScrollDepth;
	NSString* _referringSite;
	NSString* _referringUrl;
	NSString* _sourceChannelId;
	NSString* _windowId;
	SCD_Struct_CO1 _has;

}

@property (assign,nonatomic) BOOL hasArticleViewType; 
@property (assign,nonatomic) int articleViewType;                     //@synthesize articleViewType=_articleViewType - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                    //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasMaxScrollDepth; 
@property (assign,nonatomic) float maxScrollDepth;                    //@synthesize maxScrollDepth=_maxScrollDepth - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                 //@synthesize referringUrl=_referringUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSite; 
@property (nonatomic,retain) NSString * referringSite;                //@synthesize referringSite=_referringSite - In the implementation block
@property (nonatomic,readonly) BOOL hasWindowId; 
@property (nonatomic,retain) NSString * windowId;                     //@synthesize windowId=_windowId - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(NSString *)referringUrl;
-(BOOL)hasReferringUrl;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setReferringUrl:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(void)setReferringSite:(NSString *)arg1 ;
-(int)articleViewType;
-(void)setArticleViewType:(int)arg1 ;
-(void)setHasArticleViewType:(BOOL)arg1 ;
-(BOOL)hasArticleViewType;
-(BOOL)hasReferringSite;
-(NSString *)referringSite;
-(void)mergeFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(NSString *)articleId;
-(unsigned long long)hash;
-(void)setWindowId:(NSString *)arg1 ;
-(void)setMaxScrollDepth:(float)arg1 ;
-(void)setHasMaxScrollDepth:(BOOL)arg1 ;
-(BOOL)hasWindowId;
-(BOOL)hasMaxScrollDepth;
-(float)maxScrollDepth;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)windowId;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

