/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SBLockScreenPluginAction.h>

@class TUDialRequest, NSURL;

@interface SBLockScreenPluginCallAction : SBLockScreenPluginAction {

	TUDialRequest* _dialRequest;

}

@property (nonatomic,readonly) NSURL * url; 
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(BOOL)isCallAction;
@end

