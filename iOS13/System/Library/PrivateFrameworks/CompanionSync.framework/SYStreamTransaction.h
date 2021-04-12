/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

@class NSDictionary, NSProgress;


@protocol SYStreamTransaction <NSObject>
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) NSProgress * progress; 
@required
-(long long)type;
-(NSProgress *)progress;
-(NSDictionary *)metadata;

@end

