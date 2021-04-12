/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ASDBetaAppLaunchInfo *)launchInfo;
-(id)initWithBundleIdentifier:(id)arg1 preloadingLaunchInfo:(id)arg2 ;
-(id)encodedAsUserInfo;
@end

