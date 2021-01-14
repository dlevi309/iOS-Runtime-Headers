/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)identityForCompatibilityInfo:(id)arg1 ;
+(id)identityForApplicationInfo:(id)arg1 ;
-(id)succinctDescription;
-(id)init;
-(NSString *)bundlePath;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)snapshotContainerPathForSnapshot:(id)arg1 ;
-(id)description;
-(NSString *)dataContainerPath;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)bundleContainerPath;
-(id)succinctDescriptionBuilder;
-(NSString *)snapshotContainerPath;
-(id)snapshotContainerPathForGroupID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithBundleIdentifier:(id)arg1 bundlePath:(id)arg2 dataContainerPath:(id)arg3 bundleContainerPath:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
@end

