/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/WorldClockComplications.bundle/WorldClockComplications
*/


@class NSMutableSet;

@interface NTAWorldCitiesChangedListener : NSObject {

	BOOL _active;
	NSMutableSet* _observers;

}

@property (nonatomic,retain) NSMutableSet * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL active;                           //@synthesize active=_active - In the implementation block
+(id)sharedListener;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(NSMutableSet *)observers;
-(void)deactivate;
-(void)activate;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)addObserverOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_notifyPrefsChanged;
@end

