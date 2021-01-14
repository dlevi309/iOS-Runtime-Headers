/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSString;


@protocol SBFSensorActivityAttribution <NSObject,NSCopying>
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) long long sensor; 
@property (nonatomic,copy,readonly) NSString * attributionGroup; 
@required
-(long long)sensor;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(NSString *)attributionGroup;

@end

