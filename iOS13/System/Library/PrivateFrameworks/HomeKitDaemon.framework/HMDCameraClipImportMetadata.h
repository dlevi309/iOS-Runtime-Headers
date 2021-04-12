/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSDate, NSArray;

@interface HMDCameraClipImportMetadata : NSObject {

	NSDate* _startDate;
	double _targetFragmentDuration;
	NSArray* _videoSegments;
	NSArray* _posterFrames;

}

@property (readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double targetFragmentDuration;              //@synthesize targetFragmentDuration=_targetFragmentDuration - In the implementation block
@property (readonly) NSArray * videoSegments;                    //@synthesize videoSegments=_videoSegments - In the implementation block
@property (readonly) NSArray * posterFrames;                     //@synthesize posterFrames=_posterFrames - In the implementation block
-(NSDate *)startDate;
-(double)targetFragmentDuration;
-(NSArray *)posterFrames;
-(NSArray *)videoSegments;
-(id)initClipData:(id)arg1 ;
@end

