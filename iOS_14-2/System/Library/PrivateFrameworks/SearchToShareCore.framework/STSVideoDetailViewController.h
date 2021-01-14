/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/

#import <SearchToShareCore/STSResultDetailViewController.h>
#import <libobjc.A.dylib/LPYouTubePlayerDelegate.h>

@class LPYouTubePlayerView, NSString;

@interface STSVideoDetailViewController : STSResultDetailViewController <LPYouTubePlayerDelegate> {

	LPYouTubePlayerView* _playerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2 ;
-(void)viewDidLoad;
-(void)setContentURL:(id)arg1 ;
@end

