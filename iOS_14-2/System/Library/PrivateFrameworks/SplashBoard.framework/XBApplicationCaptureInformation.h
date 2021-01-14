/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSArray, NSOrderedSet, NSString;

@interface XBApplicationCaptureInformation : NSObject <BSDescriptionProviding> {

	NSArray* _captureInfos;
	NSArray* _launchImagePaths;
	NSOrderedSet* _launchRequests;

}

@property (nonatomic,readonly) NSOrderedSet * launchRequests;              //@synthesize launchRequests=_launchRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)estimatedMemoryImpactForLaunchRequest:(id)arg1 ;
-(id)launchImagePathForLaunchRequest:(id)arg1 ;
-(id)caarPathForLaunchRequest:(id)arg1 ;
-(id)initWithLaunchRequests:(id)arg1 captureInfos:(id)arg2 launchImagePaths:(id)arg3 ;
-(NSOrderedSet *)launchRequests;
@end

