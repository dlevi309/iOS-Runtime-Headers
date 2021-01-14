/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

