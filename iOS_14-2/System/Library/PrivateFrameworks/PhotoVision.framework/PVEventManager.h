/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@class NSMutableArray, PVContext;

@interface PVEventManager : NSObject {

	NSMutableArray* _notificationListeners;
	PVContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(void)addNotificationListener:(id)arg1 ;
-(void)removeNotificationListener:(id)arg1 ;
-(void)publishEvent:(id)arg1 source:(id)arg2 ;
-(void)notifyListeners:(id)arg1 ;
@end

