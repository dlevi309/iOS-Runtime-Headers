/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)timeout;
-(NSString *)description;
-(XBApplicationLaunchCompatibilityInfo *)applicationCompatibilityInfo;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 timeout:(double)arg3 ;
-(XBLaunchStateRequest *)launchRequest;
@end

