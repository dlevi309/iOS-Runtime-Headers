/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>

@class NSString;

@interface SBInlineAppExposeWorkspaceEntity : SBWorkspaceEntity {

	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)supportsPresentationAtAnySize;
-(Class)viewControllerClass;
-(NSString *)bundleIdentifier;
-(/*^block*/id)entityGenerator;
-(id)inlineAppExposeWorkspaceEntity;
-(unsigned long long)hash;
-(BOOL)isInlineAppExposeWorkspaceEntity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)wantsExclusiveForeground;
@end

