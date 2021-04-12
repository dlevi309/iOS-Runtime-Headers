/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@class LPYouTubePlayerView, NSString;

@interface LPYouTubePlayerScriptMessageHandler : NSObject <WKScriptMessageHandler> {

	LPYouTubePlayerView* _playerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(id)initWithPlayerView:(id)arg1 ;
@end

