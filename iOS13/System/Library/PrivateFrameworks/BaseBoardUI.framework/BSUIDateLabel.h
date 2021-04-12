/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/


@protocol BSUIDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (assign,nonatomic,__weak) id<BSUIDateLabelDelegate> delegate; 
@property (assign,nonatomic) long long labelType; 
@property (assign,nonatomic) BOOL isTimestamp; 
@required
-(id<BSUIDateLabelDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)prepareForReuse;
-(long long)labelType;
-(void)setLabelType:(long long)arg1;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setAllDay:(BOOL)arg1;
-(void)stopCoalescingUpdates;
-(BOOL)isAllDay;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1;

@end

