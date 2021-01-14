/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
*/

#import <libobjc.A.dylib/EXExtensionInfoProviding.h>

@class NSString;

@interface EXRunningExtensionInfo : NSObject <EXExtensionInfoProviding> {

	NSString* _bundleIdentifier;
	NSString* _containerBundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                       //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * containerBundleIdentifier;              //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)notifyExtensionMainCalled;
+(id)extensionInfoForCurrentProcess;
-(id)initForCurrentProcess;
-(NSString *)containerBundleIdentifier;
-(NSString *)bundleIdentifier;
@end

