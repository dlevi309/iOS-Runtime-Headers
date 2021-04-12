/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_checkForContentBlockers;
-(BOOL)hasEnabledContentBlockers;
-(id)initWithPerSitePreferencesStore:(id)arg1 ;
-(void)invalidate;
-(void)contentBlockerManagerExtensionListDidChange:(id)arg1 ;
@end

