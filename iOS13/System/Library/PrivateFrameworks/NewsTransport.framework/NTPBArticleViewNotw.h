/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_NT2 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(void)setReferringUrl:(NSString *)arg1 ;
-(BOOL)hasReferringUrl;
-(NSString *)referringUrl;
-(void)setWindowId:(NSString *)arg1 ;
-(void)setMaxScrollDepth:(float)arg1 ;
-(void)setHasMaxScrollDepth:(BOOL)arg1 ;
-(BOOL)hasMaxScrollDepth;
-(BOOL)hasWindowId;
-(float)maxScrollDepth;
-(NSString *)windowId;
-(void)setReferringSite:(NSString *)arg1 ;
-(int)articleViewType;
-(void)setArticleViewType:(int)arg1 ;
-(void)setHasArticleViewType:(BOOL)arg1 ;
-(BOOL)hasArticleViewType;
-(BOOL)hasReferringSite;
-(NSString *)referringSite;
@end
