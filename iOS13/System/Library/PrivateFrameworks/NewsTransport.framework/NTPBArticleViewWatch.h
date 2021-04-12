/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBArticleViewWatch : PBCodable <NSCopying> {

	int _articleHostViewTypeWatch;
	NSString* _articleId;
	NSString* _articleViewingSessionIdWatch;
	NSString* _sourceChannelId;
	BOOL _didScroll;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasArticleHostViewTypeWatch; 
@property (assign,nonatomic) int articleHostViewTypeWatch;                         //@synthesize articleHostViewTypeWatch=_articleHostViewTypeWatch - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionIdWatch; 
@property (nonatomic,retain) NSString * articleViewingSessionIdWatch;              //@synthesize articleViewingSessionIdWatch=_articleViewingSessionIdWatch - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                 //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                           //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasDidScroll; 
@property (assign,nonatomic) BOOL didScroll;                                       //@synthesize didScroll=_didScroll - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)didScroll;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(void)setArticleViewingSessionIdWatch:(NSString *)arg1 ;
-(int)articleHostViewTypeWatch;
-(void)setArticleHostViewTypeWatch:(int)arg1 ;
-(void)setHasArticleHostViewTypeWatch:(BOOL)arg1 ;
-(BOOL)hasArticleHostViewTypeWatch;
-(BOOL)hasArticleViewingSessionIdWatch;
-(void)setDidScroll:(BOOL)arg1 ;
-(void)setHasDidScroll:(BOOL)arg1 ;
-(BOOL)hasDidScroll;
-(NSString *)articleViewingSessionIdWatch;
@end

