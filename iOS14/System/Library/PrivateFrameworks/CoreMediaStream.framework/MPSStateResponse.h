/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPSStateResponse : PBCodable <NSCopying> {

	long long _retryAfterSeconds;
	long long _version;
	int _icplAction;
	int _mpsAction;
	SCD_Struct_MP6 _has;

}

@property (assign,nonatomic) BOOL hasRetryAfterSeconds; 
@property (assign,nonatomic) long long retryAfterSeconds;              //@synthesize retryAfterSeconds=_retryAfterSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasMpsAction; 
@property (assign,nonatomic) int mpsAction;                            //@synthesize mpsAction=_mpsAction - In the implementation block
@property (assign,nonatomic) BOOL hasIcplAction; 
@property (assign,nonatomic) int icplAction;                           //@synthesize icplAction=_icplAction - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) long long version;                        //@synthesize version=_version - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasVersion;
-(void)mergeFrom:(id)arg1 ;
-(void)setRetryAfterSeconds:(long long)arg1 ;
-(int)icplAction;
-(id)description;
-(BOOL)hasRetryAfterSeconds;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(long long)retryAfterSeconds;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)mpsAction;
-(void)setHasRetryAfterSeconds:(BOOL)arg1 ;
-(void)setMpsAction:(int)arg1 ;
-(void)setHasMpsAction:(BOOL)arg1 ;
-(BOOL)hasMpsAction;
-(id)mpsActionAsString:(int)arg1 ;
-(int)StringAsMpsAction:(id)arg1 ;
-(void)setIcplAction:(int)arg1 ;
-(void)setHasIcplAction:(BOOL)arg1 ;
-(BOOL)hasIcplAction;
-(id)icplActionAsString:(int)arg1 ;
-(int)StringAsIcplAction:(id)arg1 ;
@end

