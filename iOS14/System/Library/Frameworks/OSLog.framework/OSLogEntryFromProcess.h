/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
*/

@class NSString;


@protocol OSLogEntryFromProcess
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@required
-(NSString *)process;
-(unsigned long long)threadIdentifier;
-(NSString *)sender;
-(int)processIdentifier;
-(unsigned long long)activityIdentifier;

@end

