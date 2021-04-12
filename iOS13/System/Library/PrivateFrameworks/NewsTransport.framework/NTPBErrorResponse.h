/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)errors;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrors:(NSMutableArray *)arg1 ;
-(void)addErrors:(id)arg1 ;
-(unsigned long long)errorsCount;
-(void)clearErrors;
-(id)errorsAtIndex:(unsigned long long)arg1 ;
@end

