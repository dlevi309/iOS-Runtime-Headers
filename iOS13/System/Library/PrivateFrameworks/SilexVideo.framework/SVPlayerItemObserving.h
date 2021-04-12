/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class AVPlayerItem;


@protocol SVPlayerItemObserving <NSObject>
@property (nonatomic,__weak,readonly) AVPlayerItem * item; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(AVPlayerItem *)item;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;

@end

