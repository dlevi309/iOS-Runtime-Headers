/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/


@class NSString, NSDateComponents;

@interface MTUISleepMetadata : NSObject {

	BOOL _displaysTime;
	NSString* _detailedDescription;
	NSString* _mainDescription;
	NSDateComponents* _alarmComponents;

}

@property (nonatomic,retain) NSString * detailedDescription;                  //@synthesize detailedDescription=_detailedDescription - In the implementation block
@property (nonatomic,retain) NSString * mainDescription;                      //@synthesize mainDescription=_mainDescription - In the implementation block
@property (nonatomic,retain) NSDateComponents * alarmComponents;              //@synthesize alarmComponents=_alarmComponents - In the implementation block
@property (assign,nonatomic) BOOL displaysTime;                               //@synthesize displaysTime=_displaysTime - In the implementation block
-(NSString *)detailedDescription;
-(void)setDetailedDescription:(NSString *)arg1 ;
-(NSString *)mainDescription;
-(void)setMainDescription:(NSString *)arg1 ;
-(NSDateComponents *)alarmComponents;
-(void)setAlarmComponents:(NSDateComponents *)arg1 ;
-(BOOL)displaysTime;
-(void)setDisplaysTime:(BOOL)arg1 ;
@end

