/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, DOCDocumentSource, NSString, DOCSourceSearchingContext;

@interface PSDocumentsPolicyController : PSListController {

	BOOL _isFirstSourceResults;
	PSSpecifier* _groupSpecifier;
	DOCDocumentSource* _selectedDocumentSource;
	NSString* _bundleIdentifier;
	DOCSourceSearchingContext* _searchingContext;

}

@property (nonatomic,retain) PSSpecifier * groupSpecifier;                              //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) DOCDocumentSource * selectedDocumentSource;                //@synthesize selectedDocumentSource=_selectedDocumentSource - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) DOCSourceSearchingContext * searchingContext;              //@synthesize searchingContext=_searchingContext - In the implementation block
@property (assign,nonatomic) BOOL isFirstSourceResults;                                 //@synthesize isFirstSourceResults=_isFirstSourceResults - In the implementation block
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(PSSpecifier *)groupSpecifier;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(DOCSourceSearchingContext *)searchingContext;
-(id)documentSource;
-(void)setSelectedDocumentSource:(DOCDocumentSource *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)isFirstSourceResults;
-(void)setIsFirstSourceResults:(BOOL)arg1 ;
-(void)updateRadioGroupWithSources:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSearchingContext:(DOCSourceSearchingContext *)arg1 ;
-(DOCDocumentSource *)selectedDocumentSource;
-(void)updateFooterAnimated:(BOOL)arg1 ;
-(void)setDocumentSource:(id)arg1 ;
-(void)dealloc;
@end

