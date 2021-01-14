/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SABinaryLoadInfo.h>

@interface SABinaryLoadInfoTrackingHighestOffset : SABinaryLoadInfo {

	BOOL _isInKernelAddressSpace;
	unsigned long long _highestOffset;

}

@property (assign) unsigned long long highestOffset;              //@synthesize highestOffset=_highestOffset - In the implementation block
-(BOOL)isInKernelAddressSpace;
-(unsigned long long)highestOffset;
-(void)setHighestOffset:(unsigned long long)arg1 ;
@end

