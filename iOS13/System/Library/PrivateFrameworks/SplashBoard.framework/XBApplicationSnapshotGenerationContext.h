/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBApplicationLaunchCompatibilityInfo, XBLaunchStateRequest, NSString;

@interface XBApplicationSnapshotGenerationContext : NSObject <BSDescriptionProviding> {

	XBApplicationLaunchCompatibilityInfo* _applicationCompatibilityInfo;
	XBLaunchStateRequest* _launchRequest;
	double _timeout;

}

@property (nonatomic,readonly) XBApplicationLaunchCompatibilityInfo * applicationCompatibilityInfo;              //@synthesize applicationCompatibilityInfo=_applicationCompatibilityInfo - In the implementation block
@property (nonatomic,copy,readonly) XBLaunchStateRequest * launchRequest;                                        //@synthesize launchRequest=_launchRequest - In the implementation block
@property (nonatomic,readonly) double timeout;                                                                   //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(double)timeout;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(XBLaunchStateRequest *)launchRequest;
-(XBApplicationLaunchCompatibilityInfo *)applicationCompatibilityInfo;
-(id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 timeout:(double)arg3 ;
@end

