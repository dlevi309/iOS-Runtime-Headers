/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXScrollObserverManager.h>

@protocol SXScrollObserverManager <NSObject>
@required
-(void)removeScrollObserver:(id)arg1;
-(void)addScrollObserver:(id)arg1;

@end

#import <libobjc.A.dylib/SXScrollReporting.h>

@class NSHashTable, NSString;

@interface SXScrollObserverManager : NSObject <SXScrollObserverManager, SXScrollReporting> {

	BOOL _scrolling;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL scrolling;                         //@synthesize scrolling=_scrolling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willStartScrolling;
-(NSHashTable *)observers;
-(id)init;
-(BOOL)scrolling;
-(void)didStopScrolling;
-(void)setScrolling:(BOOL)arg1 ;
-(void)removeScrollObserver:(id)arg1 ;
-(void)didScroll;
-(void)addScrollObserver:(id)arg1 ;
@end

