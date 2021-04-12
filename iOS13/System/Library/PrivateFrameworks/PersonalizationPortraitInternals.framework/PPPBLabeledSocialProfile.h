/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)username;
-(NSString *)service;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)hasUsername;
-(BOOL)hasLabel;
-(void)setService:(NSString *)arg1 ;
-(BOOL)hasService;
-(NSString *)urlString;
-(void)setUrlString:(NSString *)arg1 ;
-(BOOL)hasUrlString;
-(BOOL)hasUserIdentifier;
@end

