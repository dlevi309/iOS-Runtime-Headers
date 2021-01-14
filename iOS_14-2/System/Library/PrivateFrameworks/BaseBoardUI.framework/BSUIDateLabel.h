/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/


@protocol BSUIDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) BOOL allDay; 
@property (assign,nonatomic,__weak) id<BSUIDateLabelDelegate> delegate; 
@property (assign,nonatomic) long long labelType; 
@property (assign,nonatomic) BOOL isTimestamp; 
@required
-(void)setAllDay:(BOOL)arg1;
-(BOOL)isAllDay;
-(id<BSUIDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(void)stopCoalescingUpdates;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(void)setLabelType:(long long)arg1;
-(long long)labelType;

@end

