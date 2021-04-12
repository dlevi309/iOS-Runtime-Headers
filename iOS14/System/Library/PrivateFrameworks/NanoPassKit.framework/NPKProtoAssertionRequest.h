/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NPKProtoAssertionRequest : PBRequest <NSCopying> {

	int _assertionType;
	NSString* _requestUUIDString;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (nonatomic,retain) NSString * requestUUIDString;              //@synthesize requestUUIDString=_requestUUIDString - In the implementation block
@property (assign,nonatomic) BOOL hasAssertionType; 
@property (assign,nonatomic) int assertionType;                         //@synthesize assertionType=_assertionType - In the implementation block
@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                              //@synthesize pending=_pending - In the implementation block
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)pending;
-(int)assertionType;
-(unsigned long long)hash;
-(void)setAssertionType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasAssertionType:(BOOL)arg1 ;
-(BOOL)hasAssertionType;
-(void)setRequestUUIDString:(NSString *)arg1 ;
-(id)assertionTypeAsString:(int)arg1 ;
-(int)StringAsAssertionType:(id)arg1 ;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(NSString *)requestUUIDString;
@end

