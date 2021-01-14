/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, _DKPRSource, _DKPRStream, _DKPRValue;

@interface _DKPREvent : PBCodable <NSCopying> {

	double _creationDate;
	double _endDate;
	double _startDate;
	NSString* _identifier;
	NSMutableArray* _metadatas;
	_DKPRSource* _source;
	_DKPRStream* _stream;
	_DKPRValue* _value;
	SCD_Struct_DK5 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

