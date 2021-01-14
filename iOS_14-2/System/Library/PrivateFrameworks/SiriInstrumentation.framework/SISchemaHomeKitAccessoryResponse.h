/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaHomeKitAccessoryResponse : PBCodable {

	int _homeKitAccessoryType;
	int _numAccessoriesCompleted;
	int _numAccessoriesNotCompleted;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) int homeKitAccessoryType;                        //@synthesize homeKitAccessoryType=_homeKitAccessoryType - In the implementation block
@property (assign,nonatomic) BOOL hasHomeKitAccessoryType; 
@property (assign,nonatomic) int numAccessoriesCompleted;                     //@synthesize numAccessoriesCompleted=_numAccessoriesCompleted - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesCompleted; 
@property (assign,nonatomic) int numAccessoriesNotCompleted;                  //@synthesize numAccessoriesNotCompleted=_numAccessoriesNotCompleted - In the implementation block
@property (assign,nonatomic) BOOL hasNumAccessoriesNotCompleted; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHomeKitAccessoryType:(int)arg1 ;
-(void)setNumAccessoriesCompleted:(int)arg1 ;
-(void)setNumAccessoriesNotCompleted:(int)arg1 ;
-(int)homeKitAccessoryType;
-(int)numAccessoriesCompleted;
-(int)numAccessoriesNotCompleted;
-(BOOL)hasHomeKitAccessoryType;
-(void)setHasHomeKitAccessoryType:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesCompleted;
-(void)setHasNumAccessoriesCompleted:(BOOL)arg1 ;
-(BOOL)hasNumAccessoriesNotCompleted;
-(void)setHasNumAccessoriesNotCompleted:(BOOL)arg1 ;
@end

