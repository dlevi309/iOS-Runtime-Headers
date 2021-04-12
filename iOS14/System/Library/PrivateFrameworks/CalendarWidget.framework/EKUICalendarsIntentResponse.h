/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarWidget.framework/CalendarWidget
*/

#import <Intents/INIntentResponse.h>

@class NSArray;

@interface EKUICalendarsIntentResponse : INIntentResponse {

	 code;

}

@property (copy,nonatomic) NSArray * calendars; 
@property (assign,nonatomic) long long code; 
-(id)init;
-(void)setCode:(long long)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)code;
@end

