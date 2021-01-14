/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/FIAPPlugin.h>

@class NSString, SGURLDissector;

@interface SGURLPlugin : NSObject <FIAPPlugin> {

	SGURLDissector* _urlDissector;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 ;
-(id)setup;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 ;
-(id)processSearchableItem:(id)arg1 ;
-(void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(BOOL)_shouldProcessSearchableItem:(id)arg1 ;
-(id)extractURLsFromTextPropertiesOfItem:(id)arg1 handle:(id)arg2 ;
-(id)extractURLsFromAttributesOfItem:(id)arg1 handle:(id)arg2 ;
-(NSString *)identifier;
@end

