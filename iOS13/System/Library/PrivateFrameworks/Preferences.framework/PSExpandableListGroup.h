/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <libobjc.A.dylib/PSSpecifierGroup.h>

@class PSListController, NSString, NSMutableArray, PSSpecifier;

@interface PSExpandableListGroup : NSObject <PSSpecifierGroup> {

	PSListController* _listController;
	NSString* _groupSpecifierID;
	long long _collaspeAfterCount;
	NSMutableArray* _specifiers;
	BOOL _showAll;
	PSSpecifier* _showAllSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(long long)_groupIndex;
-(id)spinnerSpecifier;
-(id)initWithListController:(id)arg1 groupSpecifierID:(id)arg2 collapseAfterCount:(long long)arg3 ;
-(id)showAllSpecifier;
-(void)showAll;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)addSpecifiers:(id)arg1 ;
-(void)removeAllSpecifiers;
@end

