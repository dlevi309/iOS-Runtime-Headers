/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BCSCallToAction : PBCodable <NSCopying> {

	NSString* _body;
	NSString* _language;
	NSString* _subtitle;
	NSString* _title;
	BOOL _isDefault;
	SCD_Struct_BC1 _has;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL hasIsDefault; 
@property (assign,nonatomic) BOOL isDefault;                   //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) NSString * body;                  //@synthesize body=_body - In the implementation block
-(void)setBody:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)body;
-(BOOL)hasBody;
-(BOOL)hasLanguage;
-(BOOL)hasTitle;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasIsDefault:(BOOL)arg1 ;
-(BOOL)hasIsDefault;
-(BOOL)hasSubtitle;
-(id)description;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

