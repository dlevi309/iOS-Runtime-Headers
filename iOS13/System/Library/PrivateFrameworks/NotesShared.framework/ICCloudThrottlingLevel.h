/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@interface ICCloudThrottlingLevel : NSObject {

	double _batchInterval;
	unsigned long long _numberOfBatches;

}

@property (assign,nonatomic) double batchInterval;                            //@synthesize batchInterval=_batchInterval - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfBatches;              //@synthesize numberOfBatches=_numberOfBatches - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(double)batchInterval;
-(void)setBatchInterval:(double)arg1 ;
-(id)initWithBatchInterval:(double)arg1 numberOfBatches:(unsigned long long)arg2 ;
-(unsigned long long)numberOfBatches;
-(void)setNumberOfBatches:(unsigned long long)arg1 ;
@end

