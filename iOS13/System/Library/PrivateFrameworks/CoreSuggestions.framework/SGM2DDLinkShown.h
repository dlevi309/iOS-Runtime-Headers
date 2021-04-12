/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(int)interface;
-(void)setInterface:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasInterface;
-(void)setHasInterface:(BOOL)arg1 ;
-(id)interfaceAsString:(int)arg1 ;
-(int)StringAsInterface:(id)arg1 ;
@end

