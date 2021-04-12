/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBErrorResponse : PBCodable <NSCopying> {

	NSMutableArray* _errors;

}

@property (nonatomic,retain) NSMutableArray * errors;              //@synthesize errors=_errors - In the implementation block
+(Class)errorsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(NSMutableArray *)errors;
-(unsigned long long)hash;
-(void)clearErrors;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)addErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)errorsCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)errorsAtIndex:(unsigned long long)arg1 ;
@end

