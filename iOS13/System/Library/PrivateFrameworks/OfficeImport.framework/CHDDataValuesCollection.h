/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHDDataValuesCollection : NSObject {

	CFDataRef mPackedValues;
	unsigned long long mDataValueCount;
	CFDictionaryRef mIndexToDataValueMap;
	BOOL mContainsStringValue;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(void)cleanup;
-(BOOL)addDataPoint:(CHDDataPoint*)arg1 ;
-(CHDDataPoint*)dataPointAtIndex:(unsigned long long)arg1 ;
-(id)dataValueAtIndex:(unsigned long long)arg1 ;
-(void)finishReading;
-(id)initWithDataPointCount:(unsigned long long)arg1 ;
-(void)setupBufferForValues:(unsigned long long)arg1 ;
-(CHDDataPoint*)dataPointWithIndex:(unsigned long long)arg1 ;
-(void)resetWithDataPointCount:(unsigned long long)arg1 ;
-(BOOL)addDataValue:(id)arg1 ;
-(id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2 ;
-(id)dataValueWithIndex:(unsigned long long)arg1 ;
-(unsigned long long)maxDataPointIndex;
-(BOOL)containsStringValue;
@end

