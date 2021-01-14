/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSettingsConfigurationsMutableSource.h>

@protocol PXSettingsConfigurationsSourceObserver;
@class NSUserDefaults, NSMutableArray;

@interface PXSettingsConfigurationsSource : NSObject <PXSettingsConfigurationsMutableSource> {

	NSUserDefaults* _userDefaults;
	id<PXSettingsConfigurationsSourceObserver> _observer;
	NSMutableArray* _configurations;

}

@property (nonatomic,readonly) NSMutableArray * configurations;                                       //@synthesize configurations=_configurations - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                                         //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) long long numberOfConfigurations; 
@property (assign,nonatomic,__weak) id<PXSettingsConfigurationsSourceObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(id)initWithUserDefaults:(id)arg1 ;
-(void)_save;
-(void)setObserver:(id<PXSettingsConfigurationsSourceObserver>)arg1 ;
-(id)init;
-(id<PXSettingsConfigurationsSourceObserver>)observer;
-(void)insertConfiguration:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertConfigurations:(id)arg1 atIndex:(long long)arg2 ;
-(void)deleteConfigurationAtIndex:(long long)arg1 ;
-(void)deleteAllConfigurations;
-(long long)numberOfConfigurations;
-(void)renameConfigurationAtIndex:(long long)arg1 withName:(id)arg2 ;
-(void)updateConfigurationAtIndex:(long long)arg1 ;
-(id)configurationAtIndex:(long long)arg1 ;
-(long long)indexOfConfiguration:(id)arg1 ;
-(NSUserDefaults *)userDefaults;
-(NSMutableArray *)configurations;
-(void)performChanges:(/*^block*/id)arg1 ;
@end

