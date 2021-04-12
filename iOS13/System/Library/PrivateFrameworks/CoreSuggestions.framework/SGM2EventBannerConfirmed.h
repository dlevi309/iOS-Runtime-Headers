/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2EventBannerConfirmed : PBCodable <NSCopying> {

	int _app;
	int _category;
	int _dateAdj;
	int _duraAdj;
	int _extracted;
	NSString* _key;
	int _state;
	int _titleAdj;
	SCD_Struct_SG5 _has;

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
@property (assign,nonatomic) BOOL hasTitleAdj; 
@property (assign,nonatomic) int titleAdj;                   //@synthesize titleAdj=_titleAdj - In the implementation block
@property (assign,nonatomic) BOOL hasDateAdj; 
@property (assign,nonatomic) int dateAdj;                    //@synthesize dateAdj=_dateAdj - In the implementation block
@property (assign,nonatomic) BOOL hasDuraAdj; 
@property (assign,nonatomic) int duraAdj;                    //@synthesize duraAdj=_duraAdj - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)state;
-(void)setKey:(NSString *)arg1 ;
-(void)setState:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(BOOL)hasKey;
-(void)setHasCategory:(BOOL)arg1 ;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(BOOL)hasState;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(void)setHasState:(BOOL)arg1 ;
-(int)app;
-(void)setApp:(int)arg1 ;
-(BOOL)hasApp;
-(void)setHasApp:(BOOL)arg1 ;
-(id)appAsString:(int)arg1 ;
-(int)StringAsApp:(id)arg1 ;
-(int)extracted;
-(void)setExtracted:(int)arg1 ;
-(void)setHasExtracted:(BOOL)arg1 ;
-(BOOL)hasExtracted;
-(id)extractedAsString:(int)arg1 ;
-(int)StringAsExtracted:(id)arg1 ;
-(int)titleAdj;
-(void)setTitleAdj:(int)arg1 ;
-(void)setHasTitleAdj:(BOOL)arg1 ;
-(BOOL)hasTitleAdj;
-(id)titleAdjAsString:(int)arg1 ;
-(int)StringAsTitleAdj:(id)arg1 ;
-(int)dateAdj;
-(void)setDateAdj:(int)arg1 ;
-(void)setHasDateAdj:(BOOL)arg1 ;
-(BOOL)hasDateAdj;
-(id)dateAdjAsString:(int)arg1 ;
-(int)StringAsDateAdj:(id)arg1 ;
-(int)duraAdj;
-(void)setDuraAdj:(int)arg1 ;
-(void)setHasDuraAdj:(BOOL)arg1 ;
-(BOOL)hasDuraAdj;
-(id)duraAdjAsString:(int)arg1 ;
-(int)StringAsDuraAdj:(id)arg1 ;
@end

