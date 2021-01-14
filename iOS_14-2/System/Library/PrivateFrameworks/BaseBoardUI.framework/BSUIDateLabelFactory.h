/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/


@class NSMutableDictionary;

@interface BSUIDateLabelFactory : NSObject {

	NSMutableDictionary* _recycledLabelsByStyle;

}
+(id)sharedInstance;
-(id)init;
-(void)_purgeRecycledLabels;
-(long long)styleForLabel:(id)arg1 ;
-(id)startLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(void)recycleLabel:(id)arg1 ;
-(id)endLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(id)combinedDateLabelWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 forStyle:(long long)arg5 ;
-(void)dealloc;
@end

