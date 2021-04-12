/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
*/

@class NSError;


@protocol TRIDownloadNotificationProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long progress; 
@property (nonatomic,readonly) unsigned long long progressMaxValue; 
@property (nonatomic,readonly) NSError * error; 
@required
-(unsigned long long)progress;
-(NSError *)error;
-(unsigned long long)type;
-(unsigned long long)progressMaxValue;

@end

