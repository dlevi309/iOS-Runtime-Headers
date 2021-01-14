/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface ATXDefaultHomeScreenItemManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _path;

}
+(id)sharedInstance;
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)fetchDefaultStacksOfGridSize:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)fetchSmartStackOfVariant:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_JSONCompatible:(id)arg1 ;
-(id)_createDefaultsDictionary:(id)arg1 defaultTodayStack:(id)arg2 defaultWidgetsSmall:(id)arg3 defaultWidgetsMedium:(id)arg4 defaultWidgetsLarge:(id)arg5 shouldSuggestSmartStackInGallery:(BOOL)arg6 ;
-(void)_readFromFileWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchSmartStackOfVariant:(unsigned long long)arg1 localObserver:(int)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)writeDefaultStack:(id)arg1 defaultTodayPageStack:(id)arg2 defaultWidgetsSmall:(id)arg3 defaultWidgetsMedium:(id)arg4 defaultWidgetsLarge:(id)arg5 shouldSuggestSmartStackInGallery:(BOOL)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
-(void)fetchDefaultStacksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchSmartStackWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchDefaultStacksJSONWithCompletionHandler:(/*^block*/id)arg1 ;
@end

