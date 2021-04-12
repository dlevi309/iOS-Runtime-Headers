/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <Preferences/PSListController.h>

@class NSArray, NSDictionary, CKNSExtension, NSString, PSSpecifier, NSMutableArray;

@interface CKFilteringListController : PSListController {

	BOOL _showingParentViewController;
	BOOL _addCheckmark;
	NSArray* _extensionIDArray;
	NSDictionary* _extensionNameMapping;
	long long _spamFilterState;
	id _beginMappingID;
	CKNSExtension* _ckExtension;
	NSString* _currentExtensionID;
	PSSpecifier* _selectedSpecifier;
	NSMutableArray* _specifierListArray;

}

@property (assign,nonatomic) BOOL addCheckmark;                                //@synthesize addCheckmark=_addCheckmark - In the implementation block
@property (nonatomic,retain) id beginMappingID;                                //@synthesize beginMappingID=_beginMappingID - In the implementation block
@property (nonatomic,retain) CKNSExtension * ckExtension;                      //@synthesize ckExtension=_ckExtension - In the implementation block
@property (nonatomic,retain) NSString * currentExtensionID;                    //@synthesize currentExtensionID=_currentExtensionID - In the implementation block
@property (nonatomic,retain) PSSpecifier * selectedSpecifier;                  //@synthesize selectedSpecifier=_selectedSpecifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * specifierListArray;              //@synthesize specifierListArray=_specifierListArray - In the implementation block
@property (nonatomic,retain) NSArray * extensionIDArray;                       //@synthesize extensionIDArray=_extensionIDArray - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionNameMapping;              //@synthesize extensionNameMapping=_extensionNameMapping - In the implementation block
@property (assign,nonatomic) BOOL showingParentViewController;                 //@synthesize showingParentViewController=_showingParentViewController - In the implementation block
@property (assign,nonatomic) long long spamFilterState;                        //@synthesize spamFilterState=_spamFilterState - In the implementation block
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(id)_syncManager;
-(void)endMatchingExtensions;
-(void)setIsSpamFilteringDefaultEnabled;
-(void)findSpamExtensions;
-(void)showPrivacyAccessWarning:(id)arg1 isToggle:(BOOL)arg2 ;
-(void)disableSpamFiltering;
-(unsigned char)enableSpamForExtensionID:(id)arg1 withName:(id)arg2 ;
-(void)enableSpamFiltering:(id)arg1 ;
-(void)setExtensionIDArray:(NSArray *)arg1 ;
-(void)setExtensionNameMapping:(NSDictionary *)arg1 ;
-(BOOL)verifyCurrentExtensionIDValidity;
-(id)getDefaultExtension;
-(void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg1 ;
-(id)getExtensionNameAndWarning:(id)arg1 ;
-(void)tappedSpamAppCell:(id)arg1 ;
-(void)setSpamFilteringEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isSpamFilteringEnabled:(id)arg1 ;
-(void)setConversationListFilteringEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isConversationListFilteringEnabled:(id)arg1 ;
-(id)getSpamSpecifiers;
-(void)showPrivacyLegalVC;
-(NSArray *)extensionIDArray;
-(NSDictionary *)extensionNameMapping;
-(BOOL)showingParentViewController;
-(void)setShowingParentViewController:(BOOL)arg1 ;
-(long long)spamFilterState;
-(void)setSpamFilterState:(long long)arg1 ;
-(BOOL)addCheckmark;
-(void)setAddCheckmark:(BOOL)arg1 ;
-(id)beginMappingID;
-(void)setBeginMappingID:(id)arg1 ;
-(CKNSExtension *)ckExtension;
-(void)setCkExtension:(CKNSExtension *)arg1 ;
-(NSString *)currentExtensionID;
-(void)setCurrentExtensionID:(NSString *)arg1 ;
-(PSSpecifier *)selectedSpecifier;
-(void)setSelectedSpecifier:(PSSpecifier *)arg1 ;
-(NSMutableArray *)specifierListArray;
-(void)setSpecifierListArray:(NSMutableArray *)arg1 ;
@end

