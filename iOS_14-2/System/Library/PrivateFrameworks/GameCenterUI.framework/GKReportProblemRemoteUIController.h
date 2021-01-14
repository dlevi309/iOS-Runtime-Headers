/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKRemoteUIController.h>

@class GKPlayer, NSURL;

@interface GKReportProblemRemoteUIController : GKRemoteUIController {

	GKPlayer* _problemPlayer;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) GKPlayer * problemPlayer;              //@synthesize problemPlayer=_problemPlayer - In the implementation block
+(id)controllerForProblemPlayer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)fallbackURL;
-(NSURL *)url;
-(id)initWithProblemPlayer:(id)arg1 ;
-(GKPlayer *)problemPlayer;
-(void)setUrl:(NSURL *)arg1 ;
-(int)preferredLayoutStyle;
-(void)setProblemPlayer:(GKPlayer *)arg1 ;
-(id)postBodyForInitialLoad;
-(id)bagKey;
@end

