/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

