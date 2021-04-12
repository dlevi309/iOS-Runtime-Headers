/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)description;
-(_UILegibilitySettings *)legibilitySettings;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSuggestedContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)suggestedContentInsets;
@end

