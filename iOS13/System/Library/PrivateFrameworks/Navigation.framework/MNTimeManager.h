/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNTimeProvider;
@class MNObserverHashTable;

@interface MNTimeManager : NSObject {

	MNObserverHashTable* _timeManagerObservers;
	id<MNTimeProvider> _provider;

}

@property (nonatomic,retain) id<MNTimeProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)sharedManager;
+(double)currentTime;
+(id)currentDate;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setProvider:(id<MNTimeProvider>)arg1 ;
-(id<MNTimeProvider>)provider;
-(void)_resetToDefaultProvider;
@end

