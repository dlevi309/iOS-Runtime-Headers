/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class PSSpecifier, NSString, NSURL, NSArray, NSMutableSet, NSMutableArray, PSSpecifierAction;

@interface PSSearchEntry : NSObject {

	PSSpecifier* _specifier;
	NSString* _name;
	NSURL* _url;
	BOOL _isRootURL;
	NSString* _identifier;
	NSString* _sectionIdentifier;
	BOOL _isSection;
	BOOL _hasDetailController;
	BOOL _hasListController;
	NSArray* _additionalDetailTextComponents;
	PSSearchEntry* _parentEntry;
	NSMutableSet* _childEntries;
	NSString* _groupName;
	NSString* _plistName;
	NSString* _bundleName;
	NSString* _manifestBundleName;
	NSMutableArray* _keywords;
	PSSpecifierAction* _action;
	PSSpecifier* _groupSpecifier;

}

@property (nonatomic,readonly) PSSpecifier * specifier;                        //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                     //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (assign,nonatomic,__weak) PSSearchEntry * parentEntry;               //@synthesize parentEntry=_parentEntry - In the implementation block
@property (nonatomic,readonly) NSMutableSet * childEntries;                    //@synthesize childEntries=_childEntries - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isRootURL;                                 //@synthesize isRootURL=_isRootURL - In the implementation block
@property (nonatomic,copy) NSString * groupName;                               //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * plistName;                               //@synthesize plistName=_plistName - In the implementation block
@property (nonatomic,copy) NSString * bundleName;                              //@synthesize bundleName=_bundleName - In the implementation block
@property (nonatomic,copy) NSString * manifestBundleName;                      //@synthesize manifestBundleName=_manifestBundleName - In the implementation block
@property (nonatomic,readonly) NSMutableArray * keywords;                      //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,retain) PSSpecifierAction * action;                       //@synthesize action=_action - In the implementation block
+(id)schemeNameOverride;
+(void)setSchemeNameOverride:(id)arg1 ;
-(PSSpecifier *)specifier;
-(NSString *)sectionIdentifier;
-(BOOL)_specifier:(id)arg1 hasDetailController:(BOOL)arg2 ;
-(BOOL)hasFinishedIndexing;
-(id)_prefsURLIsRoot:(BOOL*)arg1 ;
-(BOOL)hasDetailController;
-(id)hierarchyDescription;
-(id)recursiveDescriptionForLevel:(unsigned long long)arg1 ;
-(NSString *)manifestBundleName;
-(NSMutableArray *)keywords;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(PSSpecifier *)groupSpecifier;
-(id)recursiveDescription;
-(id)debugDescription;
-(void)setPlistName:(NSString *)arg1 ;
-(PSSpecifierAction *)action;
-(void)setAction:(PSSpecifierAction *)arg1 ;
-(NSString *)bundleName;
-(NSURL *)url;
-(NSString *)plistName;
-(NSString *)name;
-(id)rootEntry;
-(id)description;
-(NSMutableSet *)childEntries;
-(void)setParentEntry:(PSSearchEntry *)arg1 ;
-(BOOL)isSectionEntry;
-(id)sectionEntry;
-(BOOL)isRootURL;
-(BOOL)isRootUrl;
-(PSSearchEntry *)parentEntry;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(NSString *)identifier;
-(BOOL)isRootEntry;
-(BOOL)hasListController;
-(BOOL)finishIndexing;
-(id)ancestorEntries;
-(id)initWithSpecifier:(id)arg1 parent:(id)arg2 ;
-(void)setManifestBundleName:(NSString *)arg1 ;
-(id)detailTextWithEffectiveTitle:(id*)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
@end

