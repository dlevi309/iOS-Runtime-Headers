/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)maximumDuration;
-(double)defaultDuration;
-(id)initWithSegments:(id)arg1 ;
-(void)dealloc;
-(double)minimumDuration;
-(double)computeSegmentDurations:(double*)arg1 forTotalDuration:(double)arg2 ;
-(double)computeSegmentDurations:(double*)arg1 forSpeedFactor:(double)arg2 ;
@end

