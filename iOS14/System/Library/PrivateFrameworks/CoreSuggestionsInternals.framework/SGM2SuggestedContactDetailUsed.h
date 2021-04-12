/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2SuggestedContactDetailUsed : PBCodable <NSCopying> {

	int _app;
	NSString* _key;
	SCD_Struct_SG2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasApp; 
@property (assign,nonatomic) int app;                     //@synthesize app=_app - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(id)appAsString:(int)arg1 ;
-(BOOL)hasApp;
-(void)setHasApp:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsApp:(id)arg1 ;
-(void)setApp:(int)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(int)app;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

