/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVObservable.h>

@class NSMutableDictionary, NSMapTable, NSString;

@interface TVObservableEventController : NSObject <TVObservable> {

	NSMutableDictionary* _observerRecords;
	NSMapTable* _eventsByObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)removeObserver:(id)arg1 forEvent:(id)arg2 ;
-(void)dispatchEvent:(id)arg1 sender:(id)arg2 withUserInfo:(id)arg3 ;
@end

