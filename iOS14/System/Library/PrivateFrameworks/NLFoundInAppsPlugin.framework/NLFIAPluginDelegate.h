/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLFoundInAppsPlugin.framework/NLFoundInAppsPlugin
*/


@class DESRecordStore;

@interface NLFIAPluginDelegate : NSObject {

	DESRecordStore* _recordStore;

}
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)processSearchableItem:(id)arg1 ;
-(BOOL)isSentMessage:(id)arg1 ;
-(id)languageForText:(id)arg1 ;
@end

