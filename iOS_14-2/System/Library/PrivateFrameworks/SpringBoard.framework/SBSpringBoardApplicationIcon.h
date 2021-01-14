/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@interface SBSpringBoardApplicationIcon : SBLeafIcon {

	long long _interfaceStyle;

}
-(id)init;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(BOOL)isUninstallSupported;
-(id)displayNameForLocation:(id)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(BOOL)canTruncateLabel;
-(BOOL)canTightenLabel;
-(id)initWithInterfaceStyle:(long long)arg1 ;
-(id)_generateImageWithInfo:(SBIconImageInfo)arg1 ;
@end

