/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

@class AVPlayerItem, NSError;


@protocol SVPlayerItemLoading <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) AVPlayerItem * item; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(void)load;
-(NSError *)error;
-(AVPlayerItem *)item;
-(unsigned long long)state;
-(void)onLoadingStateChange:(/*^block*/id)arg1;

@end

