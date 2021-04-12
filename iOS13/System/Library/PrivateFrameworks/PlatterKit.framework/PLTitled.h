/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

@class NSArray, NSString, NSDate, NSTimeZone, UIButton;


@protocol PLTitled <NSObject,PLContentSizeCategoryAdjusting>
@property (nonatomic,copy) NSArray * icons; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDate * date; 
@property (assign,getter=isDateAllDay,nonatomic) BOOL dateAllDay; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) long long dateFormatStyle; 
@property (nonatomic,readonly) NSArray * iconButtons; 
@property (nonatomic,readonly) UIButton * utilityButton; 
@required
-(void)setTimeZone:(id)arg1;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(NSArray *)icons;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setDate:(id)arg1;
-(void)setIcons:(id)arg1;
-(long long)dateFormatStyle;
-(void)setDateFormatStyle:(long long)arg1;
-(NSArray *)iconButtons;
-(UIButton *)utilityButton;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1;

@end

