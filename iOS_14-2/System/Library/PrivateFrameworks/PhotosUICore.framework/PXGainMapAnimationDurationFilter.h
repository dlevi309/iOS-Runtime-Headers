/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXNumberFilter.h>

@interface PXGainMapAnimationDurationFilter : PXNumberFilter {

	BOOL _gainMapImageAvailable;
	BOOL _enabled;
	double _filterStartTime;
	double _activationThreshold;

}

@property (assign,nonatomic) double filterStartTime;                  //@synthesize filterStartTime=_filterStartTime - In the implementation block
@property (assign,nonatomic) BOOL enabled;                            //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double activationThreshold;              //@synthesize activationThreshold=_activationThreshold - In the implementation block
@property (assign,nonatomic) BOOL gainMapImageAvailable;              //@synthesize gainMapImageAvailable=_gainMapImageAvailable - In the implementation block
-(BOOL)enabled;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setGainMapImageAvailable:(BOOL)arg1 ;
-(BOOL)gainMapImageAvailable;
-(double)filterStartTime;
-(void)setFilterStartTime:(double)arg1 ;
-(double)activationThreshold;
-(void)setActivationThreshold:(double)arg1 ;
-(double)updatedOutput;
@end

