/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSObject*<OS_os_activity>)activity;
-(id<CKDZoneGatekeeperWaiter>)waiter;
-(NSString *)personaID;
-(id)completionHandler;
-(id)CKPropertiesDescription;
-(NSArray *)zoneIDs;
-(id)initWithWaiter:(id)arg1 zoneIDs:(id)arg2 completionHandler:(/*^block*/id)arg3 activity:(id)arg4 ;
-(void)invokeCompletionHandler:(BOOL)arg1 ;
@end

