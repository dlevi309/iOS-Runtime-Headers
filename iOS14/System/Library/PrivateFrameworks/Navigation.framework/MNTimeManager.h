/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTimeProvider;
@class MNObserverHashTable;

@interface MNTimeManager : NSObject {

	MNObserverHashTable* _timeManagerObservers;
	id<MNTimeProvider> _provider;

}

@property (nonatomic,retain) id<MNTimeProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)currentDate;
+(id)sharedManager;
+(double)currentTime;
-(void)addObserver:(id)arg1 ;
-(void)setProvider:(id<MNTimeProvider>)arg1 ;
-(id)init;
-(id<MNTimeProvider>)provider;
-(void)removeObserver:(id)arg1 ;
-(void)_resetToDefaultProvider;
@end

