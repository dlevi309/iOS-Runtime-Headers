/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIModuleSettings : NSObject <NSCopying> {

	CCUILayoutSize _portraitLayoutSize;
	CCUILayoutSize _landscapeLayoutSize;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CCUILayoutSize)layoutSizeForInterfaceOrientation:(long long)arg1 ;
-(id)initWithPortraitLayoutSize:(CCUILayoutSize)arg1 landscapeLayoutSize:(CCUILayoutSize)arg2 ;
@end

