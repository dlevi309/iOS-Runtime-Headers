/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <libobjc.A.dylib/PSSpecifierDataSource.h>

@protocol PSSpecifierDataSource <NSObject>
@required
+(id)sharedInstance;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;

@end


@class NSMutableSet, NSMutableArray, NSString;

@interface PSSpecifierDataSource : NSObject <PSSpecifierDataSource> {

	NSMutableSet* _observerRefs;
	BOOL _specifiersLoaded;
	NSMutableArray* _specifiers;

}

@property (nonatomic,readonly) NSMutableArray * specifiers;              //@synthesize specifiers=_specifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)loadSpecifiersFromPlist:(id)arg1 inBundle:(id)arg2 target:(id)arg3 stringsTable:(id)arg4 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)observers;
-(NSMutableArray *)specifiers;
-(void)reloadSpecifiers;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)readPreferenceValue:(id)arg1 ;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2 ;
-(id)specifierForID:(id)arg1 ;
-(void)loadSpecifiers;
-(id)observersOfClass:(Class)arg1 ;
-(void)enumerateObserversOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)areSpecifiersLoaded;
-(void)_clearAllSpecifiers;
-(void)_invalidateSpecifiersForObservers;
-(void)performUpdates:(id)arg1 ;
-(void)performUpdatesAnimated:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

