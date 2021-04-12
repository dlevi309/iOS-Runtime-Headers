/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSTranslationAvailabilityProviding.h>

@protocol WBSTranslationAvailabilityProviding;
@class NSArray, NSNumber, NSString;

@interface WBSTranslationAvailability : NSObject <WBSTranslationAvailabilityProviding> {

	os_unfair_lock_s _lock;
	id<WBSTranslationAvailabilityProviding> _availabilityProvider;
	NSArray* _cachedAvailableLocalePairs;
	BOOL _hasCheckedAvailableLocalePairs;
	NSNumber* _cachedTranslationAvailableInCurrentRegion;
	NSArray* _cachedUserPreferredLocales;
	/*^block*/id _availableInCurrentRegionCompletionHandler;
	/*^block*/id _availableLocalePairsCompletionHandler;

}

@property (nonatomic,readonly) NSArray * userPreferredTargetLocales; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAvailability;
-(id)init;
-(id)_initWithAvailabilityProvider:(id)arg1 ;
-(void)_updateCachedValues;
-(void)_didUpdateSupportedRegionAndLocalePairs;
-(NSArray *)userPreferredTargetLocales;
-(void)getAvailableLocalePairsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)isTranslationSupportedForCurrentRegionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)supportedLocalePairsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getTranslationAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getAllTargetLocalesInUserPreferredOrderWithCompletionHandler:(/*^block*/id)arg1 ;
@end

