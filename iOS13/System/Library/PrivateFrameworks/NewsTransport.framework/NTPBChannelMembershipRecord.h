/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSString;

@interface NTPBChannelMembershipRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSString* _channelID;
	NSString* _draftArticleListID;
	NSString* _draftIssueListID;
	BOOL _canAccessDrafts;
	SCD_Struct_NT1 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                      //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelID; 
@property (nonatomic,retain) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (assign,nonatomic) BOOL hasCanAccessDrafts; 
@property (assign,nonatomic) BOOL canAccessDrafts;                       //@synthesize canAccessDrafts=_canAccessDrafts - In the implementation block
@property (nonatomic,readonly) BOOL hasDraftArticleListID; 
@property (nonatomic,retain) NSString * draftArticleListID;              //@synthesize draftArticleListID=_draftArticleListID - In the implementation block
@property (nonatomic,readonly) BOOL hasDraftIssueListID; 
@property (nonatomic,retain) NSString * draftIssueListID;                //@synthesize draftIssueListID=_draftIssueListID - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(NTPBRecordBase *)base;
-(NSString *)channelID;
-(void)setChannelID:(NSString *)arg1 ;
-(void)setDraftArticleListID:(NSString *)arg1 ;
-(void)setDraftIssueListID:(NSString *)arg1 ;
-(NSString *)draftArticleListID;
-(NSString *)draftIssueListID;
-(BOOL)canAccessDrafts;
-(void)setCanAccessDrafts:(BOOL)arg1 ;
-(BOOL)hasBase;
-(BOOL)hasChannelID;
-(void)setHasCanAccessDrafts:(BOOL)arg1 ;
-(BOOL)hasCanAccessDrafts;
-(BOOL)hasDraftArticleListID;
-(BOOL)hasDraftIssueListID;
@end

