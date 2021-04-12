/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol OS_dispatch_data;
@class NSObject;

@interface HMDDataStreamFrameReader : NSObject {

	NSObject*<OS_dispatch_data> _partialFrame;
	BOOL _headerInfoRead;
	BOOL _streamFailed;
	unsigned char _currentframeType;
	unsigned long long _payloadLength;

}
+(id)logCategory;
-(id)init;
-(BOOL)hasFailed;
-(void)reset;
-(unsigned long long)bytesNeededForCurrentFrame;
-(unsigned long long)_getCurrentFrameSize;
-(void)_readFrameHeaderIfPossible;
-(BOOL)hasCompleteFrame;
-(void)pushFrameData:(id)arg1 ;
-(BOOL)hasPartialData;
-(id)popRawFrame;
@end

