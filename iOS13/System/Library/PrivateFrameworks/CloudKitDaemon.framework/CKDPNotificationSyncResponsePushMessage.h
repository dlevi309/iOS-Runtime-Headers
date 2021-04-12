/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying> {

	int _badgeCount;
	NSString* _category;
	NSString* _dialog;
	NSData* _payload;
	NSString* _sound;
	int _source;
	NSString* _subtitle;
	NSMutableArray* _subtitleLocalizedArguments;
	NSString* _subtitleLocalizedKey;
	NSString* _title;
	NSMutableArray* _titleLocalizedArguments;
	NSString* _titleLocalizedKey;
	NSString* _uuid;
	BOOL _isRead;
	SCD_Struct_CK16 _has;

}

@property (assign,nonatomic) BOOL hasIsRead; 
@property (assign,nonatomic) BOOL isRead;                                              //@synthesize isRead=_isRead - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                               //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BOOL hasDialog; 
@property (nonatomic,retain) NSString * dialog;                                        //@synthesize dialog=_dialog - In the implementation block
@property (nonatomic,readonly) BOOL hasSound; 
@property (nonatomic,retain) NSString * sound;                                         //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) BOOL hasBadgeCount; 
@property (assign,nonatomic) int badgeCount;                                           //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                                      //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleLocalizedKey; 
@property (nonatomic,retain) NSString * titleLocalizedKey;                             //@synthesize titleLocalizedKey=_titleLocalizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * titleLocalizedArguments;                 //@synthesize titleLocalizedArguments=_titleLocalizedArguments - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitleLocalizedKey; 
@property (nonatomic,retain) NSString * subtitleLocalizedKey;                          //@synthesize subtitleLocalizedKey=_subtitleLocalizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * subtitleLocalizedArguments;              //@synthesize subtitleLocalizedArguments=_subtitleLocalizedArguments - In the implementation block
+(Class)titleLocalizedArgumentsType;
+(Class)subtitleLocalizedArgumentsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uuid;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isRead;
-(void)setUuid:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)subtitle;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(BOOL)hasSource;
-(BOOL)hasCategory;
-(void)setSubtitle:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(void)setSound:(NSString *)arg1 ;
-(NSString *)sound;
-(void)setIsRead:(BOOL)arg1 ;
-(BOOL)hasUuid;
-(void)setHasSource:(BOOL)arg1 ;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(BOOL)hasSubtitle;
-(BOOL)hasPayload;
-(NSString *)dialog;
-(void)setDialog:(NSString *)arg1 ;
-(int)badgeCount;
-(void)setBadgeCount:(int)arg1 ;
-(void)setHasBadgeCount:(BOOL)arg1 ;
-(BOOL)hasBadgeCount;
-(void)addTitleLocalizedArguments:(id)arg1 ;
-(void)addSubtitleLocalizedArguments:(id)arg1 ;
-(void)setTitleLocalizedKey:(NSString *)arg1 ;
-(unsigned long long)titleLocalizedArgumentsCount;
-(void)clearTitleLocalizedArguments;
-(id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(void)setSubtitleLocalizedKey:(NSString *)arg1 ;
-(unsigned long long)subtitleLocalizedArgumentsCount;
-(void)clearSubtitleLocalizedArguments;
-(id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTitleLocalizedKey;
-(BOOL)hasSubtitleLocalizedKey;
-(NSString *)titleLocalizedKey;
-(NSMutableArray *)titleLocalizedArguments;
-(void)setTitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(NSString *)subtitleLocalizedKey;
-(NSMutableArray *)subtitleLocalizedArguments;
-(void)setSubtitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(BOOL)hasDialog;
-(BOOL)hasIsRead;
-(void)setHasIsRead:(BOOL)arg1 ;
-(BOOL)hasSound;
@end

