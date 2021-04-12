/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariShared/WBSContentBlockersPreferenceManager.h>
#import <libobjc.A.dylib/SFContentBlockerManagerObserver.h>

@class NSString;

@interface _SFContentBlockersPreferenceManager : WBSContentBlockersPreferenceManager <SFContentBlockerManagerObserver> {

	BOOL _hasEnabledContentBlockers;

}

@property (nonatomic,readonly) BOOL hasEnabledContentBlockers;              //@synthesize hasEnabledContentBlockers=_hasEnabledContentBlockers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)_checkForContentBlockers;
-(BOOL)hasEnabledContentBlockers;
@end

