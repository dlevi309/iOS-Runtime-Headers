/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>

@class NSString;

@interface SBInlineAppExposeWorkspaceEntity : SBWorkspaceEntity {

	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)wantsExclusiveForeground;
-(Class)viewControllerClass;
-(BOOL)isInlineAppExposeWorkspaceEntity;
-(id)inlineAppExposeWorkspaceEntity;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(BOOL)supportsPresentationAtAnySize;
-(/*^block*/id)entityGenerator;
@end

