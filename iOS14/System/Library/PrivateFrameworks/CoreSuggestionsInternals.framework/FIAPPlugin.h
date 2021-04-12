/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

@class NSString;


@protocol FIAPPlugin <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@optional
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
-(id)setup;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
-(id)processSearchableItem:(id)arg1;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
-(id)processUserAction:(id)arg1 searchableItem:(id)arg2;
-(id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3;

@required
-(NSString *)identifier;

@end

