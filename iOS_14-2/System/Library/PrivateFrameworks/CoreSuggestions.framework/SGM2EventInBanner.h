/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2EventInBanner : PBCodable <NSCopying> {

	int _app;
	int _category;
	int _extracted;
	NSString* _key;
	int _state;
	SCD_Struct_SG3 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasApp; 
@property (assign,nonatomic) int app;                        //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) int category;                   //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasExtracted; 
@property (assign,nonatomic) int extracted;                  //@synthesize extracted=_extracted - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                      //@synthesize state=_state - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setCategory:(int)arg1 ;
-(id)appAsString:(int)arg1 ;
-(BOOL)hasState;
-(BOOL)hasApp;
-(void)setHasApp:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)category;
-(void)setHasCategory:(BOOL)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(void)setExtracted:(int)arg1 ;
-(void)setHasExtracted:(BOOL)arg1 ;
-(BOOL)hasExtracted;
-(id)extractedAsString:(int)arg1 ;
-(int)StringAsExtracted:(id)arg1 ;
-(int)StringAsApp:(id)arg1 ;
-(void)setApp:(int)arg1 ;
-(id)description;
-(BOOL)hasCategory;
-(void)setHasState:(BOOL)arg1 ;
-(NSString *)key;
-(void)setState:(int)arg1 ;
-(unsigned long long)hash;
-(int)app;
-(int)state;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)extracted;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

