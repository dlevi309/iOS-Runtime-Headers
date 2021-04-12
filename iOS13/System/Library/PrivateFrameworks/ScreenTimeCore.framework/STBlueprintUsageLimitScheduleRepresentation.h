/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class STBlueprintUsageLimitScheduleSimpleItem, NSArray;

@interface STBlueprintUsageLimitScheduleRepresentation : NSObject {

	STBlueprintUsageLimitScheduleSimpleItem* _simpleSchedule;
	NSArray* _customScheduleItems;

}

@property (nonatomic,retain) STBlueprintUsageLimitScheduleSimpleItem * simpleSchedule;              //@synthesize simpleSchedule=_simpleSchedule - In the implementation block
@property (nonatomic,copy) NSArray * customScheduleItems;                                           //@synthesize customScheduleItems=_customScheduleItems - In the implementation block
-(NSArray *)customScheduleItems;
-(STBlueprintUsageLimitScheduleSimpleItem *)simpleSchedule;
-(void)setSimpleSchedule:(STBlueprintUsageLimitScheduleSimpleItem *)arg1 ;
-(void)setCustomScheduleItems:(NSArray *)arg1 ;
@end

