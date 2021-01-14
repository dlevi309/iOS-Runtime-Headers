/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol UITraitEnvironment;
@interface _SFBrowserConfiguration : NSObject {

	long long _configuration;
	id<UITraitEnvironment> _traitEnvironment;

}

@property (getter=isPrivateBrowsingEnabled,nonatomic,readonly) BOOL privateBrowsingEnabled; 
@property (nonatomic,__weak,readonly) id<UITraitEnvironment> traitEnvironment;                           //@synthesize traitEnvironment=_traitEnvironment - In the implementation block
@property (getter=isControlledByAutomation,nonatomic,readonly) BOOL controlledByAutomation; 
@property (nonatomic,readonly) BOOL allowsKeyboardCorrectionLearning; 
@property (nonatomic,readonly) BOOL allowsRestoringEducationTabs; 
@property (nonatomic,readonly) BOOL allowsSearchSuggestions; 
@property (nonatomic,readonly) BOOL allowsSiteSpecificSearch; 
@property (nonatomic,readonly) BOOL allowsSpeculativeLoading; 
@property (nonatomic,readonly) BOOL allowsStreamlinedLogin; 
@property (nonatomic,readonly) BOOL allowsUserActivityFeedback; 
@property (nonatomic,readonly) BOOL usesPersistentDataStore; 
@property (nonatomic,readonly) BOOL allowsSearchFeedback; 
@property (nonatomic,readonly) BOOL allowsClosingLastTab; 
@property (nonatomic,readonly) BOOL allowsPersistingTabState; 
@property (nonatomic,readonly) BOOL allowsReopeningClosedTabs; 
@property (nonatomic,readonly) unsigned long long barTintStyle; 
@property (nonatomic,readonly) BOOL usesDarkTheme; 
-(BOOL)allowsReopeningClosedTabs;
-(BOOL)allowsSearchFeedback;
-(BOOL)usesDarkTheme;
-(BOOL)allowsKeyboardCorrectionLearning;
-(id<UITraitEnvironment>)traitEnvironment;
-(BOOL)usesPersistentDataStore;
-(id)description;
-(BOOL)allowsSpeculativeLoading;
-(BOOL)allowsClosingLastTab;
-(BOOL)allowsStreamlinedLogin;
-(BOOL)allowsUserActivityFeedback;
-(BOOL)allowsSearchSuggestions;
-(unsigned long long)hash;
-(id)initWithPrivateBrowsingEnabled:(BOOL)arg1 traitEnvironment:(id)arg2 controlledByAutomation:(BOOL)arg3 ;
-(BOOL)allowsRestoringEducationTabs;
-(BOOL)isPrivateBrowsingEnabled;
-(BOOL)allowsSiteSpecificSearch;
-(BOOL)allowsPersistingTabState;
-(BOOL)isControlledByAutomation;
-(unsigned long long)barTintStyle;
-(BOOL)isEqual:(id)arg1 ;
@end

