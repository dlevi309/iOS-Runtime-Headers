/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

