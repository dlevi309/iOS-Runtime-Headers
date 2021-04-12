/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
*/


@class NSHashTable;

@interface AXUIEventManager : NSObject {

	BOOL _laserEnabled;
	NSHashTable* _eventHandlers;

}

@property (nonatomic,retain) NSHashTable * eventHandlers;              //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (nonatomic,readonly) BOOL laserEnabled;                      //@synthesize laserEnabled=_laserEnabled - In the implementation block
+(id)sharedEventManager;
-(BOOL)laserEnabled;
-(NSHashTable *)eventHandlers;
-(void)setEventHandlers:(NSHashTable *)arg1 ;
-(void)registerEventHandler:(id)arg1 ;
-(id)_init;
-(BOOL)_handleUIEvent:(id)arg1 ;
-(void)unregisterEventHandler:(id)arg1 ;
@end

