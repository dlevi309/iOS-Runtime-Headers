/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@class NSArray;

@interface DNDSLifetimeMonitorResult : NSObject {

	NSArray* _activeUUIDs;
	NSArray* _expiredUUIDs;

}

@property (nonatomic,copy,readonly) NSArray * activeUUIDs;               //@synthesize activeUUIDs=_activeUUIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * expiredUUIDs;              //@synthesize expiredUUIDs=_expiredUUIDs - In the implementation block
-(id)initWithActiveUUIDs:(id)arg1 expiredUUIDs:(id)arg2 ;
-(NSArray *)activeUUIDs;
-(NSArray *)expiredUUIDs;
@end

