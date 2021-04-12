/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLFoundInAppsPlugin.framework/NLFoundInAppsPlugin
*/

@class NSString;


@protocol FIAPPlugin <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@optional
-(id)setup;
-(id)processSearchableItem:(id)arg1;
-(id)processUserAction:(id)arg1 searchableItem:(id)arg2;
-(id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;

@required
-(NSString *)identifier;

@end

