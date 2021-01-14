/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(id)arg1;
-(NSArray *)icons;
-(void)setIcons:(id)arg1;
-(void)setTitle:(id)arg1;
-(void)setDate:(id)arg1;
-(long long)dateFormatStyle;
-(NSDate *)date;
-(void)setDateFormatStyle:(long long)arg1;
-(NSString *)title;
-(BOOL)isDateAllDay;
-(void)setDateAllDay:(BOOL)arg1;
-(NSArray *)iconButtons;
-(UIButton *)utilityButton;

@end

