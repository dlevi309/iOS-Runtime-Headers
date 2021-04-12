/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@class NSArray;

@interface OFRescaler : NSObject {

	NSArray* _segments;
	double _sharedCompressibility1;
	double _sharedCompressibility2;
	double _sharedExpandability1;
	double _sharedExpandability2;
	double _compressibility1Weight;
	double _compressibility2Weight;
	double _expandability1Weight;
	double _expandability2Weight;
	double _defaultDuration;
	double _minimumDuration;
	double _maximumDuration;

}

@property (readonly) double defaultDuration;              //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (readonly) double minimumDuration;              //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (readonly) double maximumDuration;              //@synthesize maximumDuration=_maximumDuration - In the implementation block
-(void)dealloc;
-(double)defaultDuration;
-(double)maximumDuration;
-(double)minimumDuration;
-(id)initWithSegments:(id)arg1 ;
-(double)computeSegmentDurations:(double*)arg1 forTotalDuration:(double)arg2 ;
-(double)computeSegmentDurations:(double*)arg1 forSpeedFactor:(double)arg2 ;
@end

