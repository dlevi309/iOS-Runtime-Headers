/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface PSSpecifierGroupIndex : NSObject <NSCopying> {

	NSMutableArray* _specifiers;
	NSMutableArray* _groupSections;
	NSMutableArray* _groupSpecifiers;
	NSMutableArray* _ungroupedPrefixSpecifiers;
	BOOL _wantsDebugCallbacks;

}

@property (nonatomic,copy,readonly) NSArray * specifiers;                   //@synthesize specifiers=_specifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupSpecifiers; 
+(BOOL)_wantsDebuggingCallbacks;
+(id)groupIndexWithSpecifiers:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(NSArray *)specifiers;
-(BOOL)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifier:(id)arg3 ;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(BOOL)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifierAtIndex:(unsigned long long)arg3 ;
-(id)specifiersInGroup:(id)arg1 ;
-(id)indexPathForSpecifier:(id)arg1 ;
-(void)performSpecifierUpdates:(id)arg1 ;
-(id)specifierAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfGroups;
-(id)initWithSpecifiers:(id)arg1 ;
-(void)performUpdateOperation:(id)arg1 ;
-(unsigned long long)indexOfSpecifierAtIndexPath:(id)arg1 forInsertion:(BOOL)arg2 ;
-(NSRange)rangeOfSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1 ;
-(NSArray *)groupSpecifiers;
-(unsigned long long)indexOfSpecifierAtIndexPath:(id)arg1 ;
-(unsigned long long)groupIndexOfGroup:(id)arg1 ;
-(unsigned long long)groupIndexOfGroupWithID:(id)arg1 ;
-(void)performSpecifierUpdatesUsingBlock:(/*^block*/id)arg1 ;
-(void)_createGroupIndex;
-(id)_initForCopyWithGroupIndex:(id)arg1 ;
-(id)_ungroupedPrefixSpecifiers;
-(void)reloadWithSpecifiers:(id)arg1 ;
-(void)performUpdateOperation:(id)arg1 forSpecifierUpdates:(id)arg2 ;
-(void)_willPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2 ;
-(void)_getSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3 forInsertion:(BOOL)arg4 ;
-(void)_didPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2 ;
-(void)_getSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3 forInsertion:(BOOL)arg4 allowGroupSpecifiers:(BOOL)arg5 ;
-(unsigned long long)_indexOfSpecifierInSection:(unsigned long long)arg1 row:(unsigned long long)arg2 forInsertion:(BOOL)arg3 ;
-(id)indexPathForSpecifierAtIndex:(unsigned long long)arg1 forInsertion:(BOOL)arg2 ;
-(id)indexPathForSpecifierAtIndex:(unsigned long long)arg1 ;
-(id)specifiersInGroupAtGroupIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfGroupAtGroupIndex:(unsigned long long)arg1 ;
-(id)_tabStringOfDepth:(unsigned long long)arg1 ;
-(void)_appendDescriptionOfArray:(id)arg1 toString:(id)arg2 withTabLevel:(unsigned long long)arg3 ;
-(unsigned long long)numberOfRowsInGroupAtIndex:(unsigned long long)arg1 ;
-(void)_manuallyFindSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3 ;
-(id)indexPathForSpecifierWithID:(id)arg1 ;
-(BOOL)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifierWithID:(id)arg3 ;
-(NSRange)rangeOfSpecifiersInGroup:(id)arg1 ;
-(NSRange)rangeOfSpecifiersInGroupWithID:(id)arg1 ;
-(id)specifiersInGroupWithID:(id)arg1 ;
-(unsigned long long)indexOfGroupWithID:(id)arg1 ;
-(id)_groupSections;
-(id)_synthesizedSpecifiersFromGroupIndex;
@end

