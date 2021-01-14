/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BCSVisibility : PBCodable <NSCopying> {

	double _ratio;
	NSString* _country;
	NSString* _language;
	SCD_Struct_BC1 _has;

}

@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL hasCountry; 
@property (nonatomic,retain) NSString * country;               //@synthesize country=_country - In the implementation block
@property (assign,nonatomic) BOOL hasRatio; 
@property (assign,nonatomic) double ratio;                     //@synthesize ratio=_ratio - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)country;
-(BOOL)hasLanguage;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCountry;
-(double)ratio;
-(id)description;
-(void)setRatio:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRatio;
-(void)setHasRatio:(BOOL)arg1 ;
@end

