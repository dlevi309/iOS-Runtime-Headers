/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaCarPlayInvocationContext : PBCodable {

	NSString* _bundleID;
	int _directAction;
	SCD_Struct_SI1 _has;
	BOOL _hasBundleID;

}

@property (nonatomic,copy) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasBundleID;                  //@synthesize hasBundleID=_hasBundleID - In the implementation block
@property (assign,nonatomic) int directAction;                  //@synthesize directAction=_directAction - In the implementation block
@property (assign,nonatomic) BOOL hasDirectAction; 
@property (nonatomic,readonly) NSData * jsonData; 
-(id)dictionaryRepresentation;
-(BOOL)hasBundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)directAction;
-(void)setDirectAction:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDirectAction;
-(void)setHasDirectAction:(BOOL)arg1 ;
-(void)setHasBundleID:(BOOL)arg1 ;
@end

