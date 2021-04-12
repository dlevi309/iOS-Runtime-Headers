/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
*/

@class NSString, NSArray;


@protocol OSLogEntryWithPayload
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) NSString * subsystem; 
@required
-(NSString *)formatString;
-(NSString *)subsystem;
-(NSString *)category;
-(NSArray *)components;

@end

