/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ASDBetaAppLaunchInfo;

@interface TFBetaLaunchHandleConfiguration : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	ASDBetaAppLaunchInfo* _launchInfo;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) ASDBetaAppLaunchInfo * launchInfo;              //@synthesize launchInfo=_launchInfo - In the implementation block
+(id)configurationFromUserInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(ASDBetaAppLaunchInfo *)launchInfo;
-(id)initWithBundleIdentifier:(id)arg1 preloadingLaunchInfo:(id)arg2 ;
-(id)encodedAsUserInfo;
@end

