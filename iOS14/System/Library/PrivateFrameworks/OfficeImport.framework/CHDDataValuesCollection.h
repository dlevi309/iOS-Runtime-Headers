/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)addDataPoint:(CHDDataPoint*)arg1 ;
-(unsigned long long)count;
-(id)description;
-(void)cleanup;
-(CHDDataPoint*)dataPointAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
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

