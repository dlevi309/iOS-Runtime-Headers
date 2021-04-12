/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/


@class NSMutableDictionary;

@interface BSUIDateLabelFactory : NSObject {

	NSMutableDictionary* _recycledLabelsByStyle;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_purgeRecycledLabels;
-(id)_labelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 forType:(long long)arg6 ;
-(long long)styleForLabel:(id)arg1 ;
-(id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(void)recycleLabel:(id)arg1 ;
@end

