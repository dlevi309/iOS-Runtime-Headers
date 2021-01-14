/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBArticleScrollNotw : PBCodable <NSCopying> {

	NSString* _articleId;
	float _maxScrollDepth;
	NSString* _sourceChannelId;
	NSString* _windowId;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasMaxScrollDepth; 
@property (assign,nonatomic) float maxScrollDepth;                    //@synthesize maxScrollDepth=_maxScrollDepth - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                    //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasWindowId; 
@property (nonatomic,retain) NSString * windowId;                     //@synthesize windowId=_windowId - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasArticleId;
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

