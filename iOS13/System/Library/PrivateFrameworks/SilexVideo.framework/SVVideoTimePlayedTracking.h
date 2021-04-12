/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/


@protocol SVVideoTimePlayedTracking <NSObject>
@property (nonatomic,readonly) double timePlayed; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(double)timePlayed;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;

@end

