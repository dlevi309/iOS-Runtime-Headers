/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSString;

@interface SBAppExposeSwitcherModifierEvent : SBSwitcherModifierEvent {

	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(long long)type;
-(NSString *)bundleID;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
@end

