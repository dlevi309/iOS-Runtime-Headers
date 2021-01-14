/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

@class NSDictionary, NSProgress;


@protocol SYStreamTransaction <NSObject>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) NSProgress * progress; 
@required
-(NSProgress *)progress;
-(long long)type;
-(NSDictionary *)metadata;

@end

