/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBGallerySessionEndEvent : PBCodable <NSCopying> {

	unsigned _duration;
	NSString* _key;
	NSString* _sessionIdentifier;
	SCD_Struct_WF8 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSString * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)hasSessionIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

