/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/


#import <FMFUI/FMFUI-Structs.h>
@interface FMFMonogramUtility : NSObject
+(id)contactImageCache;
+(id)monogramImageOfDiameter:(double)arg1 forContact:(id)arg2 monogramStyle:(long long)arg3 tintColor:(id)arg4 customFont:(id)arg5 isPersonImage:(BOOL*)arg6 ;
+(CFStringRef)hexStringFromColor:(id)arg1 ;
+(id)contactStatusCache;
+(id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useTintColor:(id)arg3 customFont:(id)arg4 ;
+(id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 useTintColor:(id)arg3 ;
+(void)clearMonogramCache;
+(id)monogramImageOfDiameter:(double)arg1 forContact:(id)arg2 useTintColor:(id)arg3 useCustomFont:(BOOL)arg4 isPersonImage:(BOOL*)arg5 ;
@end

