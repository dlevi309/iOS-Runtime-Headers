/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/


@interface PKDurationSnapshot : NSObject {

	 snapshotTime;
	 rate;
	 elapsedDuration;
	 duration;

}

@property (readonly,nonatomic) double snapshotTime; 
@property (readonly,nonatomic) float rate; 
@property (readonly,nonatomic) double elapsedDuration; 
@property (readonly,nonatomic) double duration; 
-(id)init;
-(double)duration;
-(float)rate;
-(double)elapsedDuration;
-(double)snapshotTime;
-(id)initWithSnapshotTime:(double)arg1 rate:(float)arg2 elapsedDuration:(double)arg3 duration:(double)arg4 ;
@end

