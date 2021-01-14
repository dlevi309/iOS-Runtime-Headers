/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2BadInteractionIgnored : PBCodable <NSCopying> {

	NSString* _key;
	int _reason;
	SCD_Struct_SG1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) int reason;                  //@synthesize reason=_reason - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasReason;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(id)description;
-(int)reason;
-(NSString *)key;
-(unsigned long long)hash;
-(id)reasonAsString:(int)arg1 ;
-(int)StringAsReason:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setReason:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

