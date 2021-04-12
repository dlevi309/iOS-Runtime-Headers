/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

@class NSString;


@protocol REMAuxiliaryReminderChangeInfo
@property (nonatomic,readonly) NSString * reminderIdentifier; 
@property (nonatomic,readonly) NSString * oldListIdentifier; 
@property (nonatomic,readonly) NSString * oldExternalIdentifier; 
@required
-(NSString *)oldListIdentifier;
-(NSString *)oldExternalIdentifier;
-(NSString *)reminderIdentifier;

@end

