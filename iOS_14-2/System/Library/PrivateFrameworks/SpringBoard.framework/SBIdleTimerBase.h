/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,getter=isActivated,nonatomic) BOOL activated; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSHashTable *)observers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_logExpirationTimeout:(double)arg1 ;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)removeAllIdleTimerObservers;
-(void)_makeObserversPerformSelector:(SEL)arg1 ;
-(BOOL)isEqualToTimer:(id)arg1 ;
-(NSString *)description;
-(void)conformsToSBIdleTimerActivation;
-(BOOL)isActivated;
-(void)addIdleTimerObserver:(id)arg1 ;
-(void)removeIdleTimerObserver:(id)arg1 ;
-(unsigned long long)hash;
-(void)reset;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

