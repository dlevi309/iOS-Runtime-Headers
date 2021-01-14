/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class AVPlayerItem;


@protocol SVPlayerItemObserving <NSObject>
@property (nonatomic,__weak,readonly) AVPlayerItem * item; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(id)changeBlock;
-(AVPlayerItem *)item;
-(void)onChange:(/*^block*/id)arg1;

@end

