/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(BOOL)hasFailed;
-(unsigned long long)bytesNeededForCurrentFrame;
-(void)_readFrameHeaderIfPossible;
-(BOOL)hasCompleteFrame;
-(void)pushFrameData:(id)arg1 ;
-(BOOL)hasPartialData;
-(id)popRawFrame;
@end

