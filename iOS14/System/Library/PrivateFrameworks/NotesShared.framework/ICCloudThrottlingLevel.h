/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICCloudThrottlingLevel : NSObject {

	double _batchInterval;
	unsigned long long _numberOfBatches;

}

@property (assign,nonatomic) double batchInterval;                            //@synthesize batchInterval=_batchInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBatches;              //@synthesize numberOfBatches=_numberOfBatches - In the implementation block
-(id)init;
-(unsigned long long)numberOfBatches;
-(id)debugDescription;
-(id)description;
-(double)batchInterval;
-(void)setBatchInterval:(double)arg1 ;
-(void)setNumberOfBatches:(unsigned long long)arg1 ;
-(id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2 ;
@end

