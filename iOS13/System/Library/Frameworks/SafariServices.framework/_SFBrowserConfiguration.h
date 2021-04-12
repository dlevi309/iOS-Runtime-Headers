/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)usesDarkTheme;
-(unsigned long long)barTintStyle;
-(id)initWithPrivateBrowsingEnabled:(BOOL)arg1 traitEnvironment:(id)arg2 controlledByAutomation:(BOOL)arg3 ;
-(BOOL)isPrivateBrowsingEnabled;
-(BOOL)isControlledByAutomation;
-(BOOL)allowsKeyboardCorrectionLearning;
-(BOOL)allowsSearchSuggestions;
-(BOOL)allowsSiteSpecificSearch;
-(BOOL)allowsSpeculativeLoading;
-(BOOL)allowsStreamlinedLogin;
-(BOOL)allowsUserActivityFeedback;
-(BOOL)usesPersistentDataStore;
-(BOOL)allowsRestoringEducationTabs;
-(BOOL)allowsSearchFeedback;
-(BOOL)allowsClosingLastTab;
-(BOOL)allowsPersistingTabState;
-(BOOL)allowsReopeningClosedTabs;
-(id<UITraitEnvironment>)traitEnvironment;
@end

