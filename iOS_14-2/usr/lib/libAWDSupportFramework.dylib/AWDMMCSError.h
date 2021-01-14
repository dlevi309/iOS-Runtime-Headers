/*
* Generated on Thursday, January 14, 2021 at 2:28:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDMMCSError : PBCodable <NSCopying> {

	int _code;
	NSString* _domain;
	NSMutableArray* _underlyingErrors;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                              //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                       //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSMutableArray * underlyingErrors;              //@synthesize underlyingErrors=_underlyingErrors - In the implementation block
+(Class)underlyingErrorsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(void)setCode:(int)arg1 ;
-(id)description;
-(BOOL)hasDomain;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
-(unsigned long long)hash;
-(int)code;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setUnderlyingErrors:(NSMutableArray *)arg1 ;
-(void)addUnderlyingErrors:(id)arg1 ;
-(unsigned long long)underlyingErrorsCount;
-(void)clearUnderlyingErrors;
-(id)underlyingErrorsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)underlyingErrors;
@end

