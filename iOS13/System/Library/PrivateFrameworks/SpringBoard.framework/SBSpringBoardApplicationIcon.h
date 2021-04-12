/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@interface SBSpringBoardApplicationIcon : SBLeafIcon {

	long long _interfaceStyle;

}
-(id)init;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(id)displayNameForLocation:(id)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(BOOL)canTruncateLabel;
-(BOOL)canTightenLabel;
-(BOOL)isUninstallSupported;
-(id)initWithInterfaceStyle:(long long)arg1 ;
-(id)_generateImageWithInfo:(SBIconImageInfo)arg1 ;
@end

