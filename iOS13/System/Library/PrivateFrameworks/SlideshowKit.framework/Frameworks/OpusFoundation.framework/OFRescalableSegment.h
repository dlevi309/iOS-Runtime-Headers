/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/

#import <libobjc.A.dylib/OFRescalableSegment.h>

@protocol OFRescalableSegment <NSObject>
@property (assign) double defaultDuration; 
@property (assign) double minimumDuration; 
@property (assign) double maximumDuration; 
@property (assign) double compressibility; 
@property (assign) double expandability; 
@required
-(double)defaultDuration;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1;
-(void)setDefaultDuration:(double)arg1;
-(double)minimumDuration;
-(void)setMinimumDuration:(double)arg1;
-(double)compressibility;
-(void)setCompressibility:(double)arg1;
-(double)expandability;
-(void)setExpandability:(double)arg1;

@end


@class NSString;

@interface OFRescalableSegment : NSObject <OFRescalableSegment> {

	double _defaultDuration;
	double _minimumDuration;
	double _maximumDuration;
	double _compressibility;
	double _expandability;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) double defaultDuration;                          //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (assign) double minimumDuration;                          //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (assign) double maximumDuration;                          //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign) double compressibility;                          //@synthesize compressibility=_compressibility - In the implementation block
@property (assign) double expandability;                            //@synthesize expandability=_expandability - In the implementation block
+(id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)nonRescalableSegmentWithDuration:(double)arg1 ;
+(id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
+(id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
+(id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
-(NSString *)description;
-(double)defaultDuration;
-(double)maximumDuration;
-(void)setMaximumDuration:(double)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(double)minimumDuration;
-(void)setMinimumDuration:(double)arg1 ;
-(double)compressibility;
-(void)setCompressibility:(double)arg1 ;
-(double)expandability;
-(void)setExpandability:(double)arg1 ;
@end

