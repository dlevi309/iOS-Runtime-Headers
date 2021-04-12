/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domain;
-(int)code;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)hasDomain;
-(void)setCode:(int)arg1 ;
-(BOOL)hasCode;
-(void)setHasCode:(BOOL)arg1 ;
-(void)setUnderlyingErrors:(NSMutableArray *)arg1 ;
-(void)addUnderlyingErrors:(id)arg1 ;
-(unsigned long long)underlyingErrorsCount;
-(void)clearUnderlyingErrors;
-(id)underlyingErrorsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)underlyingErrors;
@end

