/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying> {

	NSString* _actionLocKey;
	NSString* _category;
	NSString* _launchImage;
	NSMutableArray* _localizedArguments;
	NSString* _localizedKey;
	NSString* _soundName;
	NSString* _subtitle;
	NSMutableArray* _subtitleLocalizedArguments;
	NSString* _subtitleLocalizedKey;
	NSString* _text;
	NSString* _title;
	NSMutableArray* _titleLocalizedArguments;
	NSString* _titleLocalizedKey;

}

@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedKey; 
@property (nonatomic,retain) NSString * localizedKey;                                  //@synthesize localizedKey=_localizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedArguments;                      //@synthesize localizedArguments=_localizedArguments - In the implementation block
@property (nonatomic,readonly) BOOL hasActionLocKey; 
@property (nonatomic,retain) NSString * actionLocKey;                                  //@synthesize actionLocKey=_actionLocKey - In the implementation block
@property (nonatomic,readonly) BOOL hasLaunchImage; 
@property (nonatomic,retain) NSString * launchImage;                                   //@synthesize launchImage=_launchImage - In the implementation block
@property (nonatomic,readonly) BOOL hasSoundName; 
@property (nonatomic,retain) NSString * soundName;                                     //@synthesize soundName=_soundName - In the implementation block
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
+(Class)localizedArgumentsType;
+(Class)titleLocalizedArgumentsType;
+(Class)subtitleLocalizedArgumentsType;
-(BOOL)hasText;
-(id)dictionaryRepresentation;
-(void)clearLocalizedArguments;
-(NSString *)soundName;
-(void)setSoundName:(NSString *)arg1 ;
-(id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(BOOL)hasTitle;
-(void)setTitleLocalizedKey:(NSString *)arg1 ;
-(void)clearTitleLocalizedArguments;
-(unsigned long long)localizedArgumentsCount;
-(NSMutableArray *)subtitleLocalizedArguments;
-(NSString *)subtitle;
-(void)addLocalizedArguments:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitleLocalizedKey;
-(void)setText:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(void)setLocalizedKey:(NSString *)arg1 ;
-(unsigned long long)subtitleLocalizedArgumentsCount;
-(void)setLaunchImage:(NSString *)arg1 ;
-(NSString *)actionLocKey;
-(NSString *)launchImage;
-(BOOL)hasTitleLocalizedKey;
-(unsigned long long)titleLocalizedArgumentsCount;
-(void)clearSubtitleLocalizedArguments;
-(BOOL)hasSubtitle;
-(id)description;
-(BOOL)hasCategory;
-(BOOL)hasLocalizedKey;
-(void)setSubtitleLocalizedKey:(NSString *)arg1 ;
-(void)addSubtitleLocalizedArguments:(id)arg1 ;
-(id)localizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(NSString *)text;
-(void)setTitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(void)setLocalizedArguments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)localizedArguments;
-(BOOL)hasSoundName;
-(unsigned long long)hash;
-(BOOL)hasSubtitleLocalizedKey;
-(void)setActionLocKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)titleLocalizedArguments;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)titleLocalizedKey;
-(BOOL)hasLaunchImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addTitleLocalizedArguments:(id)arg1 ;
-(NSString *)localizedKey;
-(NSString *)title;
-(void)setSubtitleLocalizedArguments:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasActionLocKey;
@end

