/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIModuleSettings : NSObject <NSCopying> {

	CCUILayoutSize _portraitLayoutSize;
	CCUILayoutSize _landscapeLayoutSize;
	BOOL _portraitDoubleMargin;
	BOOL _landscapeDoubleMargin;

}
-(id)description;
-(id)initWithPortraitLayoutSize:(CCUILayoutSize)arg1 landscapeLayoutSize:(CCUILayoutSize)arg2 portraitDoubleMargin:(BOOL)arg3 landscapeDoubleMargin:(BOOL)arg4 ;
-(id)initWithPortraitLayoutSize:(CCUILayoutSize)arg1 landscapeLayoutSize:(CCUILayoutSize)arg2 ;
-(unsigned long long)hash;
-(BOOL)doubleMarginForInterfaceOrientation:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CCUILayoutSize)layoutSizeForInterfaceOrientation:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

