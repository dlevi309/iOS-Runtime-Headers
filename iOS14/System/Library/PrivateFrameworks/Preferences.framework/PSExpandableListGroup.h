/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)showAll;
-(long long)_groupIndex;
-(void)reloadSpecifiers;
-(id)spinnerSpecifier;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(id)initWithListController:(id)arg1 groupSpecifierID:(id)arg2 collapseAfterCount:(long long)arg3 ;
-(id)showAllSpecifier;
-(void)addSpecifiers:(id)arg1 ;
-(void)removeAllSpecifiers;
-(void)reloadSpecifier:(id)arg1 ;
@end

