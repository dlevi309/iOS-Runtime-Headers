/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXScrollObserverManager.h>

@protocol SXScrollObserverManager <NSObject>
@required
-(void)addScrollObserver:(id)arg1;
-(void)removeScrollObserver:(id)arg1;

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
-(id)init;
-(NSHashTable *)observers;
-(void)didScroll;
-(BOOL)scrolling;
-(void)setScrolling:(BOOL)arg1 ;
-(void)willStartScrolling;
-(void)didStopScrolling;
-(void)addScrollObserver:(id)arg1 ;
-(void)removeScrollObserver:(id)arg1 ;
@end

