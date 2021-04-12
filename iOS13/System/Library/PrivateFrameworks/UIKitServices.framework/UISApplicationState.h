/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/


@class NSString, UISApplicationStateClient, NSDate;

@interface UISApplicationState : NSObject {

	NSString* _bundleIdentifier;
	UISApplicationStateClient* _client;

}

@property (assign,setter=_setUsesBackgroundNetwork:,nonatomic) BOOL _usesBackgroundNetwork; 
@property (assign,setter=_setNextWakeDate:,nonatomic) NSDate * _nextWakeDate; 
@property (nonatomic,copy) id badgeValue; 
-(id)init;
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBadgeValue:(id)arg1 ;
-(id)badgeValue;
-(id)initForCurrentApplication;
-(void)_setUsesBackgroundNetwork:(BOOL)arg1 ;
-(BOOL)_usesBackgroundNetwork;
-(void)_setMinimumBackgroundFetchInterval:(double)arg1 ;
-(void)_setNextWakeDate:(id)arg1 ;
-(NSDate *)_nextWakeDate;
@end

