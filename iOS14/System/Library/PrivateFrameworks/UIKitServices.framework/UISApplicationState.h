/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)badgeValue;
-(void)setBadgeValue:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)_usesBackgroundNetwork;
-(id)initForCurrentApplication;
-(id)init;
-(void)_setUsesBackgroundNetwork:(BOOL)arg1 ;
-(void)_setNextWakeDate:(id)arg1 ;
-(void)_setMinimumBackgroundFetchInterval:(double)arg1 ;
-(NSDate *)_nextWakeDate;
-(void)dealloc;
@end

