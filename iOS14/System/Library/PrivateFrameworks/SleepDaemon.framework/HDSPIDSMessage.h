/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class NSString;


@protocol HDSPIDSMessage <HKSPDictionarySerializable>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) double timeout; 
@optional
-(double)timeout;

@required
-(NSString *)identifier;

@end

