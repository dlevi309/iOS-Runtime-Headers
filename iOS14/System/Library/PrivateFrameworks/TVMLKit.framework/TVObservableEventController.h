/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

