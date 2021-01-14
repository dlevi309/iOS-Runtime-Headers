/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/


@protocol AVEditViewDelegate <NSObject>
@required
-(void)editViewDidBeginScrubbing:(id)arg1;
-(void)editViewDidEndScrubbing:(id)arg1;
-(void)editView:(id)arg1 currentTimeDidChange:(double)arg2;
-(void)editView:(id)arg1 trimStartTimeDidChange:(double)arg2;
-(void)editView:(id)arg1 trimEndTimeDidChange:(double)arg2;
-(void)editViewWillBeginRequestingThumbnails:(id)arg1;
-(void)editViewDidFinishRequestingThumbnails:(id)arg1;

@end

