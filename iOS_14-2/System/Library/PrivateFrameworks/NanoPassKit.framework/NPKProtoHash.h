/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoHash : PBCodable <NSCopying> {

	NSData* _hashData;

}

@property (nonatomic,readonly) BOOL hasHashData; 
@property (nonatomic,retain) NSData * hashData;               //@synthesize hashData=_hashData - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)hashData;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHashData:(NSData *)arg1 ;
-(BOOL)hasHashData;
@end

