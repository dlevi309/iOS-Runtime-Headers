/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying> {

	NSMutableArray* _wrappingKeyIds;

}

@property (nonatomic,retain) NSMutableArray * wrappingKeyIds;              //@synthesize wrappingKeyIds=_wrappingKeyIds - In the implementation block
+(Class)wrappingKeyIdsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setWrappingKeyIds:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(void)addWrappingKeyIds:(id)arg1 ;
-(void)clearWrappingKeyIds;
-(unsigned long long)wrappingKeyIdsCount;
-(id)wrappingKeyIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)wrappingKeyIds;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

