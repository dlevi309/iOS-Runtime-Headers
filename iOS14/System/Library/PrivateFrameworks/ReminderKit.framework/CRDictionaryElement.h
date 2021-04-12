/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
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
-(CRVectorTimestamp *)timestamp;
-(id)initWithValue:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(void)setValue:(id<CRDataType>)arg1 ;
-(id)description;
-(id)initWithValue:(id)arg1 timestamp:(id)arg2 ;
-(unsigned long long)hash;
-(void)setTimestamp:(CRVectorTimestamp *)arg1 ;
-(id<CRDataType>)value;
-(BOOL)isEqual:(id)arg1 ;
@end

