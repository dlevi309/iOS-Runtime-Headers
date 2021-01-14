/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

@class AVPlayer, NSString;


@protocol JFXAVPlayerViewer <NSObject>
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,copy) NSString * videoGravity; 
@property (nonatomic,readonly) CGSize displaySize; 
@property (nonatomic,readonly) CGRect videoBounds; 
@property (getter=isReadyForDisplay,nonatomic,readonly) BOOL readyForDisplay; 
@required
-(AVPlayer *)player;
-(void)setPlayer:(id)arg1;
-(void)setVideoGravity:(id)arg1;
-(NSString *)videoGravity;
-(BOOL)isReadyForDisplay;
-(CGRect)videoBounds;
-(CGSize)displaySize;
-(void)configureDisplayAttributesForColorSpace:(id)arg1;

@end

