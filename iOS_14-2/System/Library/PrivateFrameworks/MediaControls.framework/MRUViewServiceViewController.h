/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

@class MPMediaControlsConfiguration;


@protocol MRUViewServiceViewController <NSObject>
@property (nonatomic,retain) MPMediaControlsConfiguration * configuration; 
@property (nonatomic,copy) id dismissalBlock; 
@required
-(MPMediaControlsConfiguration *)configuration;
-(void)setDismissalBlock:(/*^block*/id)arg1;
-(id)dismissalBlock;
-(void)setConfiguration:(id)arg1;
-(void)transitionToVisible:(BOOL)arg1 animated:(BOOL)arg2;

@end

