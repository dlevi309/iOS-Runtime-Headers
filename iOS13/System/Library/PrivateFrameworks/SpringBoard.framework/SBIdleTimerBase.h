/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBIdleTimerActivation.h>
#import <libobjc.A.dylib/SBIdleTimer.h>

@class NSHashTable, NSString;

@interface SBIdleTimerBase : NSObject <SBIdleTimerActivation, SBIdleTimer> {

	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;                      //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (assign,getter=isActivated,nonatomic) BOOL activated; 
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(BOOL)isDisabled;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)isActivated;
-(BOOL)isEqualToTimer:(id)arg1 ;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addIdleTimerObserver:(id)arg1 ;
-(void)removeIdleTimerObserver:(id)arg1 ;
-(void)_makeObserversPerformSelector:(SEL)arg1 ;
-(void)_logExpirationTimeout:(double)arg1 ;
-(void)removeAllIdleTimerObservers;
@end

