/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface XBSnapshotContainerIdentity : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _bundlePath;
	NSString* _dataContainerPath;
	NSString* _bundleContainerPath;
	NSString* _snapshotContainerPath;

}

@property (nonatomic,copy,readonly) NSString * snapshotContainerPath;              //@synthesize snapshotContainerPath=_snapshotContainerPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundlePath;                         //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataContainerPath;                  //@synthesize dataContainerPath=_dataContainerPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleContainerPath;                //@synthesize bundleContainerPath=_bundleContainerPath - In the implementation block
+(id)identityForBundleProxy:(id)arg1 ;
+(id)identityForApplicationInfo:(id)arg1 ;
+(id)identityForCompatibilityInfo:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)bundleContainerPath;
-(id)_initWithBundleIdentifier:(id)arg1 bundlePath:(id)arg2 dataContainerPath:(id)arg3 bundleContainerPath:(id)arg4 ;
-(NSString *)snapshotContainerPath;
-(id)snapshotContainerPathForGroupID:(id)arg1 ;
-(NSString *)dataContainerPath;
-(id)snapshotContainerPathForSnapshot:(id)arg1 ;
@end

