/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSMapTable;

@interface SGCuratedChangeNotificationsBaseListener : NSObject {

	NSMapTable* _liveObserversMap;

}
-(void)startListening;
-(void)stopListening;
-(id)init;
-(void)fire;
-(void)dealloc;
-(void)addObserver:(/*^block*/id)arg1 forObjectLifetime:(id)arg2 ;
@end

