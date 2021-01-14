/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/XBApplicationLaunchRequestProviding.h>

@class SBApplicationController, FBSDisplayConfiguration, NSString;

@interface SBSplashBoardLaunchRequestProvider : NSObject <XBApplicationLaunchRequestProviding> {

	SBApplicationController* _applicationController;
	FBSDisplayConfiguration* _displayConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 defaultLaunchRequests:(id)arg3 ;
-(id)initWithApplicationController:(id)arg1 displayConfiguration:(id)arg2 ;
@end

