/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UILegibilitySettings;

@interface SBLockScreenPluginPresentation : NSObject <NSCopying> {

	_UILegibilitySettings* legibilitySettings;
	UIEdgeInsets suggestedContentInsets;

}

@property (assign,nonatomic) UIEdgeInsets suggestedContentInsets; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(UIEdgeInsets)suggestedContentInsets;
-(void)setSuggestedContentInsets:(UIEdgeInsets)arg1 ;
@end

