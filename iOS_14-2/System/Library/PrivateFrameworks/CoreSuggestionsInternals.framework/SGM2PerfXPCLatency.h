/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2PerfXPCLatency : PBCodable <NSCopying> {

	NSString* _key;
	int _method;
	SCD_Struct_SG2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasMethod; 
@property (assign,nonatomic) int method;                  //@synthesize method=_method - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(BOOL)hasMethod;
-(int)method;
-(void)setHasMethod:(BOOL)arg1 ;
-(id)methodAsString:(int)arg1 ;
-(int)StringAsMethod:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(void)setMethod:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

