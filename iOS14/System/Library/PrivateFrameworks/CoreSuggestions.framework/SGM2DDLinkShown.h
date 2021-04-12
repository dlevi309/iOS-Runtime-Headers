/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2DDLinkShown : PBCodable <NSCopying> {

	int _interface;
	NSString* _key;
	SCD_Struct_SG1 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasInterface; 
@property (assign,nonatomic) int interface;                  //@synthesize interface=_interface - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)setInterface:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)interface;
-(void)setHasInterface:(BOOL)arg1 ;
-(BOOL)hasInterface;
-(id)interfaceAsString:(int)arg1 ;
-(int)StringAsInterface:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

