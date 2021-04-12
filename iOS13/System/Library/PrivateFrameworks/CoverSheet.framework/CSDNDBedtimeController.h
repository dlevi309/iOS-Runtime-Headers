/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/DNDStateUpdateListener.h>

@class DNDStateService, NSHashTable, BSTimer, NSString;

@interface CSDNDBedtimeController : NSObject <DNDStateUpdateListener> {

	DNDStateService* _stateService;
	NSHashTable* _observers;
	BSTimer* _greetingGracePeriodTimer;
	BOOL _deactivated;
	BOOL _active;
	BOOL _shouldShowGreeting;

}

@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL shouldShowGreeting;                  //@synthesize shouldShowGreeting=_shouldShowGreeting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(id)initWithStateService:(id)arg1 ;
-(BOOL)shouldShowGreeting;
-(void)_cleanUpGreetingGracePeriodTimer;
-(void)setShouldShowGreeting:(BOOL)arg1 ;
@end

