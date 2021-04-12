/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/FIAPPlugin.h>

@class SGNamedEntityDissector, NSString;

@interface SGNamedEntityExtractionPlugin : NSObject <FIAPPlugin> {

	SGNamedEntityDissector* _dissector;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 ;
-(id)processSearchableItem:(id)arg1 ;
-(id)init;
-(void)_processUserActivity:(id)arg1 extractionContainer:(id)arg2 language:(id)arg3 ;
-(void)processTextContentItem:(id)arg1 ;
-(id)_harvestMapsIntent:(id)arg1 identifier:(id)arg2 ;
-(BOOL)_shouldAcceptSearchableItem:(id)arg1 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(id)extractionsFromSearchableItem:(id)arg1 ;
-(id)processUserAction:(id)arg1 searchableItem:(id)arg2 ;
-(id)_harvestPodcastsIntent:(id)arg1 identifier:(id)arg2 groupIdentifier:(id)arg3 ;
-(void)_processCSSearchableItemLocationWithName:(id)arg1 thoroughfare:(id)arg2 city:(id)arg3 state:(id)arg4 country:(id)arg5 postalCode:(id)arg6 latitude:(id)arg7 longitude:(id)arg8 extractionContainer:(id)arg9 ;
-(id)_entityContainersForUserAction:(id)arg1 searchableItem:(id)arg2 ;
-(NSString *)identifier;
-(id)_extractionsFromEntityContainers:(id)arg1 ;
-(id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3 ;
-(id)extractionsFromUserAction:(id)arg1 searchableItem:(id)arg2 ;
-(id)_entityContainersForContentItem:(id)arg1 ;
@end

