/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface BCSBusinessLinkMessage : PBCodable <NSCopying> {

	int _action;
	NSString* _bundleId;
	NSMutableArray* _businessLinkContents;
	NSMutableArray* _categoryStyleAttributes;
	NSString* _heroImage;
	NSString* _iconImage;
	NSString* _link;
	NSString* _muid;
	NSString* _redirectUrl;
	BOOL _isPoweredBy;
	SCD_Struct_BC7 _has;

}

@property (nonatomic,readonly) BOOL hasLink; 
@property (nonatomic,retain) NSString * link;                                       //@synthesize link=_link - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                                   //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasHeroImage; 
@property (nonatomic,retain) NSString * heroImage;                                  //@synthesize heroImage=_heroImage - In the implementation block
@property (nonatomic,readonly) BOOL hasIconImage; 
@property (nonatomic,retain) NSString * iconImage;                                  //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) BOOL hasRedirectUrl; 
@property (nonatomic,retain) NSString * redirectUrl;                                //@synthesize redirectUrl=_redirectUrl - In the implementation block
@property (nonatomic,retain) NSMutableArray * businessLinkContents;                 //@synthesize businessLinkContents=_businessLinkContents - In the implementation block
@property (assign,nonatomic) BOOL hasAction; 
@property (assign,nonatomic) int action;                                            //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL hasIsPoweredBy; 
@property (assign,nonatomic) BOOL isPoweredBy;                                      //@synthesize isPoweredBy=_isPoweredBy - In the implementation block
@property (nonatomic,readonly) BOOL hasMuid; 
@property (nonatomic,retain) NSString * muid;                                       //@synthesize muid=_muid - In the implementation block
@property (nonatomic,retain) NSMutableArray * categoryStyleAttributes;              //@synthesize categoryStyleAttributes=_categoryStyleAttributes - In the implementation block
+(Class)businessLinkContentsType;
+(Class)categoryStyleAttributesType;
-(NSString *)link;
-(BOOL)hasMuid;
-(id)dictionaryRepresentation;
-(void)setLink:(NSString *)arg1 ;
-(void)setMuid:(NSString *)arg1 ;
-(void)setHeroImage:(NSString *)arg1 ;
-(NSString *)iconImage;
-(void)setHasAction:(BOOL)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(BOOL)hasBundleId;
-(void)mergeFrom:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(id)description;
-(BOOL)hasAction;
-(void)setIconImage:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)muid;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasLink;
-(BOOL)hasIconImage;
-(id)actionAsString:(int)arg1 ;
-(int)StringAsAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)heroImage;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isPoweredBy;
-(NSMutableArray *)businessLinkContents;
-(NSMutableArray *)categoryStyleAttributes;
-(NSString *)redirectUrl;
-(BOOL)hasIsPoweredBy;
-(void)addBusinessLinkContents:(id)arg1 ;
-(void)addCategoryStyleAttributes:(id)arg1 ;
-(void)setRedirectUrl:(NSString *)arg1 ;
-(unsigned long long)businessLinkContentsCount;
-(void)clearBusinessLinkContents;
-(id)businessLinkContentsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)categoryStyleAttributesCount;
-(void)clearCategoryStyleAttributes;
-(id)categoryStyleAttributesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHeroImage;
-(BOOL)hasRedirectUrl;
-(void)setIsPoweredBy:(BOOL)arg1 ;
-(void)setHasIsPoweredBy:(BOOL)arg1 ;
-(void)setBusinessLinkContents:(NSMutableArray *)arg1 ;
-(void)setCategoryStyleAttributes:(NSMutableArray *)arg1 ;
@end

