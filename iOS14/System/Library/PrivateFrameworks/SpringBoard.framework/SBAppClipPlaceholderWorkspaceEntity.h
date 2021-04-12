/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>

@class NSString;

@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity {

	NSString* _bundleIdentifier;
	NSString* _futureSceneIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureSceneIdentifier;              //@synthesize futureSceneIdentifier=_futureSceneIdentifier - In the implementation block
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(BOOL)supportsPresentationAtAnySize;
-(Class)viewControllerClass;
-(NSString *)bundleIdentifier;
-(id)appClipPlaceholderEntity;
-(/*^block*/id)entityGenerator;
-(BOOL)isAppClipPlaceholderEntity;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)wantsExclusiveForeground;
-(NSString *)futureSceneIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 futureSceneIdentifier:(id)arg2 ;
@end

