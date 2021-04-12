/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISLivePhotoVitalityFilter.h>

@class NSDate;

@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter {

	BOOL _isVisible;
	BOOL _hasTargetVisibilityOffset;
	BOOL _isScrolling;
	BOOL _isDecelerating;
	double _visibilityOffset;
	double _targetVisibilityOffset;
	NSDate* _estimatedScrollEndDate;
	long long __state;

}

@property (assign,setter=_setState:,nonatomic) long long _state;                       //@synthesize _state=__state - In the implementation block
@property (assign,setter=setVisible:,nonatomic) BOOL isVisible;                        //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) double visibilityOffset;                                  //@synthesize visibilityOffset=_visibilityOffset - In the implementation block
@property (assign,nonatomic) BOOL hasTargetVisibilityOffset;                           //@synthesize hasTargetVisibilityOffset=_hasTargetVisibilityOffset - In the implementation block
@property (assign,nonatomic) double targetVisibilityOffset;                            //@synthesize targetVisibilityOffset=_targetVisibilityOffset - In the implementation block
@property (nonatomic,retain) NSDate * estimatedScrollEndDate;                          //@synthesize estimatedScrollEndDate=_estimatedScrollEndDate - In the implementation block
@property (assign,setter=setScrolling:,nonatomic) BOOL isScrolling;                    //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,setter=setDecelerating:,nonatomic) BOOL isDecelerating;              //@synthesize isDecelerating=_isDecelerating - In the implementation block
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isDecelerating;
-(void)setScrolling:(BOOL)arg1 ;
-(BOOL)isVisible;
-(BOOL)isScrolling;
-(double)visibilityOffset;
-(void)setEstimatedScrollEndDate:(NSDate *)arg1 ;
-(void)setDecelerating:(BOOL)arg1 ;
-(void)setTargetVisibilityOffset:(double)arg1 ;
-(void)setHasTargetVisibilityOffset:(BOOL)arg1 ;
-(void)setVisibilityOffset:(double)arg1 ;
-(void)updateOutput;
-(BOOL)hasTargetVisibilityOffset;
-(double)targetVisibilityOffset;
-(NSDate *)estimatedScrollEndDate;
@end

