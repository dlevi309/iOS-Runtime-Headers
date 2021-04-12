/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface BCSChatSuggestMessage : PBCodable <NSCopying> {

	long long _phoneHash;
	NSString* _backgroundColor;
	NSString* _bizId;
	NSMutableArray* _callToActions;
	NSMutableArray* _chatOpenHours;
	NSString* _group;
	NSString* _intentId;
	NSString* _name;
	NSMutableArray* _phoneOpenHours;
	NSString* _squareLogoUrl;
	NSString* _timeZone;
	NSString* _tintColor;
	NSMutableArray* _visibilities;
	NSString* _wideLogoUrl;
	BOOL _isVerified;
	SCD_Struct_BC3 _has;

}

@property (assign,nonatomic) BOOL hasPhoneHash; 
@property (assign,nonatomic) long long phoneHash;                          //@synthesize phoneHash=_phoneHash - In the implementation block
@property (nonatomic,readonly) BOOL hasBizId; 
@property (nonatomic,retain) NSString * bizId;                             //@synthesize bizId=_bizId - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * chatOpenHours;               //@synthesize chatOpenHours=_chatOpenHours - In the implementation block
@property (nonatomic,retain) NSMutableArray * phoneOpenHours;              //@synthesize phoneOpenHours=_phoneOpenHours - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeZone; 
@property (nonatomic,retain) NSString * timeZone;                          //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) BOOL hasSquareLogoUrl; 
@property (nonatomic,retain) NSString * squareLogoUrl;                     //@synthesize squareLogoUrl=_squareLogoUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasWideLogoUrl; 
@property (nonatomic,retain) NSString * wideLogoUrl;                       //@synthesize wideLogoUrl=_wideLogoUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,retain) NSString * backgroundColor;                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasTintColor; 
@property (nonatomic,retain) NSString * tintColor;                         //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) BOOL hasIsVerified; 
@property (assign,nonatomic) BOOL isVerified;                              //@synthesize isVerified=_isVerified - In the implementation block
@property (nonatomic,retain) NSMutableArray * callToActions;               //@synthesize callToActions=_callToActions - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibilities;                //@synthesize visibilities=_visibilities - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentId; 
@property (nonatomic,retain) NSString * intentId;                          //@synthesize intentId=_intentId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroup; 
@property (nonatomic,retain) NSString * group;                             //@synthesize group=_group - In the implementation block
+(Class)chatOpenHoursType;
+(Class)phoneOpenHoursType;
+(Class)callToActionsType;
+(Class)visibilitiesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(NSString *)timeZone;
-(void)setName:(NSString *)arg1 ;
-(void)setGroup:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSString *)group;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(NSString *)tintColor;
-(void)setTintColor:(NSString *)arg1 ;
-(BOOL)isVerified;
-(void)setIsVerified:(BOOL)arg1 ;
-(void)setHasIsVerified:(BOOL)arg1 ;
-(BOOL)hasIsVerified;
-(BOOL)hasGroup;
-(NSString *)intentId;
-(void)setIntentId:(NSString *)arg1 ;
-(BOOL)hasIntentId;
-(BOOL)hasBackgroundColor;
-(BOOL)hasTintColor;
-(BOOL)hasTimeZone;
-(void)addChatOpenHours:(id)arg1 ;
-(void)addPhoneOpenHours:(id)arg1 ;
-(void)addCallToActions:(id)arg1 ;
-(void)addVisibilities:(id)arg1 ;
-(void)setBizId:(NSString *)arg1 ;
-(unsigned long long)chatOpenHoursCount;
-(void)clearChatOpenHours;
-(id)chatOpenHoursAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)phoneOpenHoursCount;
-(void)clearPhoneOpenHours;
-(id)phoneOpenHoursAtIndex:(unsigned long long)arg1 ;
-(void)setSquareLogoUrl:(NSString *)arg1 ;
-(void)setWideLogoUrl:(NSString *)arg1 ;
-(unsigned long long)callToActionsCount;
-(void)clearCallToActions;
-(id)callToActionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)visibilitiesCount;
-(void)clearVisibilities;
-(id)visibilitiesAtIndex:(unsigned long long)arg1 ;
-(void)setPhoneHash:(long long)arg1 ;
-(void)setHasPhoneHash:(BOOL)arg1 ;
-(BOOL)hasPhoneHash;
-(BOOL)hasBizId;
-(BOOL)hasSquareLogoUrl;
-(BOOL)hasWideLogoUrl;
-(long long)phoneHash;
-(NSString *)bizId;
-(NSMutableArray *)chatOpenHours;
-(void)setChatOpenHours:(NSMutableArray *)arg1 ;
-(NSMutableArray *)phoneOpenHours;
-(void)setPhoneOpenHours:(NSMutableArray *)arg1 ;
-(NSString *)squareLogoUrl;
-(NSString *)wideLogoUrl;
-(NSMutableArray *)callToActions;
-(void)setCallToActions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)visibilities;
-(void)setVisibilities:(NSMutableArray *)arg1 ;
@end

