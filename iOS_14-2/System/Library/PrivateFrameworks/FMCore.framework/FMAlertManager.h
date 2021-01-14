/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/


@class NSMutableDictionary;

@interface FMAlertManager : NSObject {

	NSMutableDictionary* _activeAlerts;
	NSMutableDictionary* _activeCFNotificationsByCategory;

}

@property (nonatomic,retain) NSMutableDictionary * activeAlerts;                                 //@synthesize activeAlerts=_activeAlerts - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeCFNotificationsByCategory;              //@synthesize activeCFNotificationsByCategory=_activeCFNotificationsByCategory - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)initSingleton;
-(void)setActiveAlerts:(NSMutableDictionary *)arg1 ;
-(void)setActiveCFNotificationsByCategory:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)activeCFNotificationsByCategory;
-(NSMutableDictionary *)activeAlerts;
-(id)_xpcTransactionNameFor:(id)arg1 ;
-(void)activateAlert:(id)arg1 ;
@end

