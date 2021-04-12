/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLFoundInAppsPlugin.framework/NLFoundInAppsPlugin
*/

#import <libobjc.A.dylib/FIAPPlugin.h>

@class NSString, NSArray, NSBundle;

@interface NLFoundInAppsPlugin : NSObject <FIAPPlugin> {

	NSArray* _delegates;
	NSBundle* _FIAPBundle;
	Class _FIAPResult;

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
-(NSString *)identifier;
@end

