/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_BC7 _has;

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
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(id)dictionaryRepresentation;
-(NSString *)timeZone;
-(void)setTimeZone:(NSString *)arg1 ;
-(void)setTintColor:(NSString *)arg1 ;
-(BOOL)hasName;
-(BOOL)isVerified;
-(NSString *)bizId;
-(void)mergeFrom:(id)arg1 ;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(void)setIsVerified:(BOOL)arg1 ;
-(BOOL)hasGroup;
-(BOOL)hasIsVerified;
-(void)setHasIsVerified:(BOOL)arg1 ;
-(NSString *)backgroundColor;
-(NSString *)name;
-(BOOL)hasTintColor;
-(id)description;
-(NSString *)intentId;
-(void)setIntentId:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasBackgroundColor;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)hasIntentId;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasTimeZone;
-(NSMutableArray *)callToActions;
-(long long)phoneHash;
-(NSMutableArray *)chatOpenHours;
-(NSMutableArray *)phoneOpenHours;
-(NSMutableArray *)visibilities;
-(NSString *)squareLogoUrl;
-(NSString *)wideLogoUrl;
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
-(void)setChatOpenHours:(NSMutableArray *)arg1 ;
-(void)setPhoneOpenHours:(NSMutableArray *)arg1 ;
-(void)setCallToActions:(NSMutableArray *)arg1 ;
-(void)setVisibilities:(NSMutableArray *)arg1 ;
@end

