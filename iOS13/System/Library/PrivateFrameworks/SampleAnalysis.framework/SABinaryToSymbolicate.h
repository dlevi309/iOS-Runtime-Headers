/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class SABinary;

@interface SABinaryToSymbolicate : NSObject {

	int _livePid;
	SABinary* _binary;
	unsigned long long _dataGatheringOptions;

}

@property (readonly) SABinary * binary;                                  //@synthesize binary=_binary - In the implementation block
@property (assign) unsigned long long dataGatheringOptions;              //@synthesize dataGatheringOptions=_dataGatheringOptions - In the implementation block
@property (assign) int livePid;                                          //@synthesize livePid=_livePid - In the implementation block
+(id)binaryToSymbolicateWithBinary:(id)arg1 ;
-(SABinary *)binary;
-(unsigned long long)dataGatheringOptions;
-(void)setDataGatheringOptions:(unsigned long long)arg1 ;
-(int)livePid;
-(void)setLivePid:(int)arg1 ;
@end

