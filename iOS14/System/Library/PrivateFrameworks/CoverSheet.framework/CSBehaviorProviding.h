/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSBehaviorProviding <NSObject>
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@required
-(long long)notificationBehavior;
-(void)conformsToCSBehaviorProviding;
-(long long)proximityDetectionMode;
-(long long)scrollingStrategy;
-(unsigned long long)restrictedCapabilities;

@end

