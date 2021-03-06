/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DESBfloat16Transport, DESBinary32Transport, DESBinary64Transport;

@interface DESDataTransport : PBCodable <NSCopying> {

	DESBfloat16Transport* _bfloat16;
	DESBinary32Transport* _binary32;
	DESBinary64Transport* _binary64;

}

@property (nonatomic,readonly) BOOL hasBinary64; 
@property (nonatomic,retain) DESBinary64Transport * binary64;              //@synthesize binary64=_binary64 - In the implementation block
@property (nonatomic,readonly) BOOL hasBinary32; 
@property (nonatomic,retain) DESBinary32Transport * binary32;              //@synthesize binary32=_binary32 - In the implementation block
@property (nonatomic,readonly) BOOL hasBfloat16; 
@property (nonatomic,retain) DESBfloat16Transport * bfloat16;              //@synthesize bfloat16=_bfloat16 - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBinary64:(DESBinary64Transport *)arg1 ;
-(void)setBinary32:(DESBinary32Transport *)arg1 ;
-(void)setBfloat16:(DESBfloat16Transport *)arg1 ;
-(BOOL)hasBinary64;
-(BOOL)hasBinary32;
-(BOOL)hasBfloat16;
-(DESBinary64Transport *)binary64;
-(DESBinary32Transport *)binary32;
-(DESBfloat16Transport *)bfloat16;
@end

