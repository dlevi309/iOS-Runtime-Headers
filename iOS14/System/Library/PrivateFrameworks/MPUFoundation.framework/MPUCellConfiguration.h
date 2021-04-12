/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@interface MPUCellConfiguration : NSObject
+(id)tableViewBackgroundColor;
+(Class)tableViewCellClass;
+(id)reuseIdentifier;
+(id)tableViewSeparatorColor;
+(double)tableViewCellHeight;
+(void)handleScrollViewDidScrollForCell:(id)arg1 viewController:(id)arg2 ;
+(void)handleScrollViewDidScrollForCell:(id)arg1 inScrollView:(id)arg2 viewController:(id)arg3 ;
+(void)handleScrollViewDidEndDeceleratingForCell:(id)arg1 viewController:(id)arg2 ;
+(void)configureCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5 ;
+(void)configureDownloadStatusForCell:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5 ;
+(void)configureCellForSizing:(id)arg1 ;
+(void)configureCellAfterDeceleration:(id)arg1 withViewController:(id)arg2 entity:(id)arg3 atIndex:(unsigned long long)arg4 animated:(BOOL)arg5 ;
+(id)mediaEntityPropertiesToFetch;
+(void)willDisplayCell:(id)arg1 inTableView:(id)arg2 withViewController:(id)arg3 atIndex:(unsigned long long)arg4 ;
+(void)didEndDisplayingCell:(id)arg1 withViewController:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(UIEdgeInsets)tableViewSeparatorInset;
+(long long)tableViewSeparatorStyle;
+(id)tableViewCellBackgroundColor;
+(double)expandedTableViewCellHeight;
+(BOOL)wantsScrollViewDidScroll;
+(BOOL)wantsScrollViewDidScrollInScrollView;
+(BOOL)wantsScrollViewDidEndDecelerating;
@end

