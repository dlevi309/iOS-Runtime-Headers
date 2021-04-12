/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSString, UIColor;

@interface NTKReminderTimelineEntry : NTKTimelineEntryModel {

	BOOL _displayAsConflicting;
	NSDate* _dueDate;
	NSString* _primaryReminderTitle;
	NSString* _primaryReminderId;
	NSString* _secondaryReminderTitle;
	unsigned long long _overlappingReminderCount;
	UIColor* _primaryReminderParentListColor;

}

@property (nonatomic,retain) NSDate * dueDate;                                         //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,retain) NSString * primaryReminderTitle;                          //@synthesize primaryReminderTitle=_primaryReminderTitle - In the implementation block
@property (nonatomic,retain) NSString * primaryReminderId;                             //@synthesize primaryReminderId=_primaryReminderId - In the implementation block
@property (nonatomic,retain) NSString * secondaryReminderTitle;                        //@synthesize secondaryReminderTitle=_secondaryReminderTitle - In the implementation block
@property (assign,nonatomic) BOOL displayAsConflicting;                                //@synthesize displayAsConflicting=_displayAsConflicting - In the implementation block
@property (assign,nonatomic) unsigned long long overlappingReminderCount;              //@synthesize overlappingReminderCount=_overlappingReminderCount - In the implementation block
@property (nonatomic,retain) UIColor * primaryReminderParentListColor;                 //@synthesize primaryReminderParentListColor=_primaryReminderParentListColor - In the implementation block
+(id)_reminderImageCorner;
+(id)_cornerReminderImageProvider;
+(id)_reminderImageAnalog;
+(id)_analogReminderImageProvider;
+(id)lockedEntryForFamily:(long long)arg1 ;
+(id)loadingEntryForFamily:(long long)arg1 ;
-(id)description;
-(NSDate *)dueDate;
-(void)setDueDate:(NSDate *)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setPrimaryReminderTitle:(NSString *)arg1 ;
-(void)setOverlappingReminderCount:(unsigned long long)arg1 ;
-(NSString *)primaryReminderTitle;
-(NSString *)primaryReminderId;
-(NSString *)secondaryReminderTitle;
-(id)_createLargeUtilityTemplate;
-(id)_createLargeModularTemplate;
-(id)_createSignatureCornerTemplate;
-(unsigned long long)overlappingReminderCount;
-(UIColor *)primaryReminderParentListColor;
-(void)setPrimaryReminderId:(NSString *)arg1 ;
-(void)setSecondaryReminderTitle:(NSString *)arg1 ;
-(BOOL)displayAsConflicting;
-(void)setDisplayAsConflicting:(BOOL)arg1 ;
-(void)setPrimaryReminderParentListColor:(UIColor *)arg1 ;
@end

