/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSArray;

@interface SXDataRecordStore : NSObject {

	NSArray* _descriptors;
	NSArray* _records;

}

@property (nonatomic,readonly) NSArray * records;                  //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
-(NSArray *)records;
-(NSArray *)descriptors;
-(unsigned long long)numberOfRecords;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
-(id)initWithRecords:(id)arg1 andDescriptors:(id)arg2 ;
-(id)recordsUsingSortDescriptors:(id)arg1 ;
@end

