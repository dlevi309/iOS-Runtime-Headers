/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NLFoundInAppsPlugin.framework/NLFoundInAppsPlugin
*/


@class DESRecordStore;

@interface NLFIAPluginDelegate : NSObject {

	DESRecordStore* _recordStore;

}
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)processSearchableItem:(id)arg1 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 ;
-(void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 ;
-(BOOL)isSentMessage:(id)arg1 ;
-(id)languageForText:(id)arg1 ;
@end

