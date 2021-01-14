/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasVisible;
-(void)setHasVisible:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

