/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2ContactConfirmed : PBCodable <NSCopying> {

	int _app;
	int _extracted;
	NSString* _key;
	BOOL _firstNameAdj;
	BOOL _isUpdate;
	BOOL _lastNameAdj;
	BOOL _middleNameAdj;
	SCD_Struct_SG2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasApp; 
@property (assign,nonatomic) int app;                            //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) BOOL hasFirstNameAdj; 
@property (assign,nonatomic) BOOL firstNameAdj;                  //@synthesize firstNameAdj=_firstNameAdj - In the implementation block
@property (assign,nonatomic) BOOL hasLastNameAdj; 
@property (assign,nonatomic) BOOL lastNameAdj;                   //@synthesize lastNameAdj=_lastNameAdj - In the implementation block
@property (assign,nonatomic) BOOL hasMiddleNameAdj; 
@property (assign,nonatomic) BOOL middleNameAdj;                 //@synthesize middleNameAdj=_middleNameAdj - In the implementation block
@property (assign,nonatomic) BOOL hasIsUpdate; 
@property (assign,nonatomic) BOOL isUpdate;                      //@synthesize isUpdate=_isUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasExtracted; 
@property (assign,nonatomic) int extracted;                      //@synthesize extracted=_extracted - In the implementation block
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
-(BOOL)hasKey;
-(BOOL)isUpdate;
-(int)app;
-(void)setApp:(int)arg1 ;
-(void)setIsUpdate:(BOOL)arg1 ;
-(BOOL)hasApp;
-(void)setHasApp:(BOOL)arg1 ;
-(id)appAsString:(int)arg1 ;
-(int)StringAsApp:(id)arg1 ;
-(void)setFirstNameAdj:(BOOL)arg1 ;
-(void)setHasFirstNameAdj:(BOOL)arg1 ;
-(BOOL)hasFirstNameAdj;
-(void)setLastNameAdj:(BOOL)arg1 ;
-(void)setHasLastNameAdj:(BOOL)arg1 ;
-(BOOL)hasLastNameAdj;
-(void)setMiddleNameAdj:(BOOL)arg1 ;
-(void)setHasMiddleNameAdj:(BOOL)arg1 ;
-(BOOL)hasMiddleNameAdj;
-(void)setHasIsUpdate:(BOOL)arg1 ;
-(BOOL)hasIsUpdate;
-(int)extracted;
-(void)setExtracted:(int)arg1 ;
-(void)setHasExtracted:(BOOL)arg1 ;
-(BOOL)hasExtracted;
-(id)extractedAsString:(int)arg1 ;
-(int)StringAsExtracted:(id)arg1 ;
-(BOOL)firstNameAdj;
-(BOOL)lastNameAdj;
-(BOOL)middleNameAdj;
@end

