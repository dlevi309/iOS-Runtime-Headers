/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface ACProtobufDate : PBCodable <NSCopying> {

	double _value;

}

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double value;               //@synthesize value=_value - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDate:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSDate *)date;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)value;
-(BOOL)isEqual:(id)arg1 ;
@end

