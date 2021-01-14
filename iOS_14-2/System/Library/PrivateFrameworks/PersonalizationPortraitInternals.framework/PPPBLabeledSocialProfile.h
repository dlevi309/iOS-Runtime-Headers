/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBLabeledSocialProfile : PBCodable <NSCopying> {

	NSString* _label;
	NSString* _service;
	NSString* _urlString;
	NSString* _userIdentifier;
	NSString* _username;

}

@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasUrlString; 
@property (nonatomic,retain) NSString * urlString;                   //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) BOOL hasUsername; 
@property (nonatomic,retain) NSString * username;                    //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) BOOL hasUserIdentifier; 
@property (nonatomic,retain) NSString * userIdentifier;              //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NSString * service;                     //@synthesize service=_service - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)urlString;
-(NSString *)userIdentifier;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)hasLabel;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(BOOL)hasUsername;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)username;
-(id)description;
-(BOOL)hasService;
-(void)setService:(NSString *)arg1 ;
-(BOOL)hasUrlString;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setUrlString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)service;
-(BOOL)hasUserIdentifier;
@end

