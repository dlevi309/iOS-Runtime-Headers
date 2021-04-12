/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
*/

#import <SuggestionsSpotlightMetrics/SuggestionsSpotlightMetrics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGSM2EventResultInSpotlight : PBCodable <NSCopying> {

	NSString* _key;
	BOOL _visible;
	SCD_Struct_SG1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible;                 //@synthesize visible=_visible - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)hasKey;
-(void)setHasVisible:(BOOL)arg1 ;
-(BOOL)hasVisible;
@end

