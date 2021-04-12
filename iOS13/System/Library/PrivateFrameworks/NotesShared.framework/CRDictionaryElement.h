/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol CRDataType;
@class CRVectorTimestamp;

@interface CRDictionaryElement : NSObject {

	id<CRDataType> _value;
	CRVectorTimestamp* _timestamp;

}

@property (nonatomic,retain) id<CRDataType> value;                       //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) CRVectorTimestamp * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
+(id)temporaryElementWithValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<CRDataType>)value;
-(void)setValue:(id<CRDataType>)arg1 ;
-(CRVectorTimestamp *)timestamp;
-(void)setTimestamp:(CRVectorTimestamp *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 timestamp:(id)arg2 ;
-(void)mergeWith:(id)arg1 ;
@end

