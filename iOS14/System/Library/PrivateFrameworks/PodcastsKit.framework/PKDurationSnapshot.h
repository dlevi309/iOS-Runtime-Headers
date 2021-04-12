/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)rate;
-(double)duration;
-(double)elapsedDuration;
-(double)snapshotTime;
-(id)initWithSnapshotTime:(double)arg1 rate:(float)arg2 elapsedDuration:(double)arg3 duration:(double)arg4 ;
@end

