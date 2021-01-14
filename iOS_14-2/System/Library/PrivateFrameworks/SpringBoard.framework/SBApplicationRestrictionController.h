/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/STTelephonyStateObserver.h>

@protocol SBApplicationRestrictionDataSource;
@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet, SBApplicationDefaults, NSString;

@interface SBApplicationRestrictionController : NSObject <STTelephonyStateObserver> {

	id<SBApplicationRestrictionDataSource> _dataSource;
	NSHashTable* _observers;
	NSMutableDictionary* _tagValidityMap;
	NSMutableDictionary* _validTagsByIdentifier;
	MGNotificationTokenStructRef _tagsNotificationToken;
	NSMutableSet* _enabledTags;
	NSMutableDictionary* _ratingRanksByIdentifier;
	NSSet* _restrictedIdentifiers;
	SBApplicationDefaults* _applicationDefaults;
	BOOL _showInternalApps;
	BOOL _hasHideNonDefaultSystemAppsCapability;
	BOOL _showAllSystemApps;
	BOOL _canPostRestrictionState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(void)beginPostingChanges;
-(void)noteVisibilityOverridesDidChange;
-(void)removeObserver:(id)arg1 ;
-(void)carrierBundleInfoDidChangeForStateProvider:(id)arg1 slot:(long long)arg2 ;
-(BOOL)isApplicationIdentifierRestricted:(id)arg1 ;
-(void)noteApplicationIdentifiersDidChangeWithAdded:(id)arg1 replaced:(id)arg2 removed:(id)arg3 ;
-(void)noteRestrictionsMayHaveChanged;
-(void)dealloc;
@end

