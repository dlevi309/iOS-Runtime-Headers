/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SGM2SuggestdExitReason : PBCodable <NSCopying> {

	unsigned _exitCode;
	NSString* _key;
	SCD_Struct_SG2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasExitCode; 
@property (assign,nonatomic) unsigned exitCode;              //@synthesize exitCode=_exitCode - In the implementation block
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)exitCode;
-(id)description;
-(NSString *)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExitCode:(unsigned)arg1 ;
-(void)setHasExitCode:(BOOL)arg1 ;
-(BOOL)hasExitCode;
@end

