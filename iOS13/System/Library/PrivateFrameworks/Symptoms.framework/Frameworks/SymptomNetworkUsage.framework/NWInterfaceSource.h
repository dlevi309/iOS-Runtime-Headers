/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
*/


@interface NWInterfaceSource : NSObject {

	unsigned _ifIndex;
	unsigned long long _srcRef;
	unsigned long long _threshold;

}

@property (assign) unsigned long long srcRef;                 //@synthesize srcRef=_srcRef - In the implementation block
@property (assign) unsigned long long threshold;              //@synthesize threshold=_threshold - In the implementation block
@property (assign) unsigned ifIndex;                          //@synthesize ifIndex=_ifIndex - In the implementation block
-(unsigned long long)threshold;
-(void)setThreshold:(unsigned long long)arg1 ;
-(unsigned)ifIndex;
-(void)setIfIndex:(unsigned)arg1 ;
-(unsigned long long)srcRef;
-(void)setSrcRef:(unsigned long long)arg1 ;
@end

