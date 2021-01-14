/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKAddressBook : NSObject
+(id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(BOOL)arg3 customFont:(id)arg4 ;
+(id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(BOOL)arg3 ;
+(id)contactImageOfDiameter:(double)arg1 forID:(id)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 customFont:(id)arg5 ;
+(id)contactImageCache;
+(id)monogrammerProvider;
+(id)contactImageOfDiameter:(double)arg1 forID:(id)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 ;
+(void)flushMonogrammers;
+(id)transcriptContactImageOfDiameter:(double)arg1 forID:(id)arg2 ;
+(id)locationSharingContactImageOfDiameter:(double)arg1 forID:(id)arg2 useCustomFont:(BOOL)arg3 ;
@end

