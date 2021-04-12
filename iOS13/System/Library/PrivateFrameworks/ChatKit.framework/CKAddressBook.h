/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKAddressBook : NSObject
+(void*)addressBook;
+(id)locationSharingContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 useCustomFont:(BOOL)arg3 ;
+(id)monogrammerWithDiameter:(double)arg1 style:(long long)arg2 useAppTintColor:(BOOL)arg3 customFont:(id)arg4 ;
+(id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 customFont:(id)arg5 ;
+(id)contactImageCache;
+(id)placeholderContactImageOfDiameter:(double)arg1 monogramStyle:(long long)arg2 tintMonogramText:(BOOL)arg3 ;
+(id)contactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 monogramStyle:(long long)arg3 tintMonogramText:(BOOL)arg4 ;
+(id)monogrammerProvider;
+(id)transcriptContactImageOfDiameter:(double)arg1 forRecordID:(int)arg2 ;
+(void)flushMonogrammers;
@end

