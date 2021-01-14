/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKDZoneGatekeeperWaiter, OS_os_activity;
@class NSArray, NSObject, NSString;

@interface CKWaiterWrapper : NSObject {

	id<CKDZoneGatekeeperWaiter> _waiter;
	NSArray* _zoneIDs;
	NSObject*<OS_os_activity> _activity;
	/*^block*/id _completionHandler;
	NSString* _personaID;

}

@property (nonatomic,readonly) id<CKDZoneGatekeeperWaiter> waiter;              //@synthesize waiter=_waiter - In the implementation block
@property (nonatomic,readonly) NSArray * zoneIDs;                               //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) NSString * personaID;                            //@synthesize personaID=_personaID - In the implementation block
-(id<CKDZoneGatekeeperWaiter>)waiter;
-(NSArray *)zoneIDs;
-(NSObject*<OS_os_activity>)activity;
-(id)CKPropertiesDescription;
-(NSString *)personaID;
-(id)completionHandler;
-(id)description;
-(id)initWithWaiter:(id)arg1 zoneIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 activity:(id)arg4 ;
-(void)invokeCompletionHandler:(BOOL)arg1 ;
@end
