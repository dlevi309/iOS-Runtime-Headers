/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXVideoScrubberControllerTarget;
@class NSDate;

@interface PXScrubberSeekRequest : NSObject {

	NSDate* _dateCreated;
	double _seekTime;
	id<PXVideoScrubberControllerTarget> _target;

}

@property (nonatomic,copy) NSDate * dateCreated;                                             //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) double seekTime;                                                //@synthesize seekTime=_seekTime - In the implementation block
@property (assign,nonatomic,__weak) id<PXVideoScrubberControllerTarget> target;              //@synthesize target=_target - In the implementation block
-(void)setTarget:(id<PXVideoScrubberControllerTarget>)arg1 ;
-(double)seekTime;
-(id)init;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(void)setSeekTime:(double)arg1 ;
-(id<PXVideoScrubberControllerTarget>)target;
-(id)initWithTarget:(id)arg1 seekTime:(double)arg2 ;
@end

