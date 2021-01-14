/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDefaultDuration:(double)arg1;
-(double)maximumDuration;
-(double)defaultDuration;
-(void)setMaximumDuration:(double)arg1;
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

@property (assign) double defaultDuration;                          //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (assign) double minimumDuration;                          //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (assign) double maximumDuration;                          //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign) double compressibility;                          //@synthesize compressibility=_compressibility - In the implementation block
@property (assign) double expandability;                            //@synthesize expandability=_expandability - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3 ;
+(id)nonRescalableSegmentWithDuration:(double)arg1 ;
+(id)rescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
+(id)moreRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
+(id)lessRescalableSegmentWithDefaultDuration:(double)arg1 minimumDuration:(double)arg2 ;
-(void)setDefaultDuration:(double)arg1 ;
-(double)maximumDuration;
-(double)defaultDuration;
-(void)setMaximumDuration:(double)arg1 ;
-(NSString *)description;
-(double)minimumDuration;
-(void)setMinimumDuration:(double)arg1 ;
-(double)compressibility;
-(void)setCompressibility:(double)arg1 ;
-(double)expandability;
-(void)setExpandability:(double)arg1 ;
@end

