/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithSpecifiers:(id)arg1 ;
-(NSArray *)specifiers;
-(id)init;
-(void)performUpdateOperation:(id)arg1 ;
-(unsigned long long)indexOfSpecifierAtIndexPath:(id)arg1 forInsertion:(BOOL)arg2 ;
-(NSRange)rangeOfSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1 ;
-(NSArray *)groupSpecifiers;
-(unsigned long long)groupIndexOfGroupWithID:(id)arg1 ;
-(unsigned long long)indexOfSpecifierAtIndexPath:(id)arg1 ;
-(unsigned long long)groupIndexOfGroup:(id)arg1 ;
-(void)performSpecifierUpdatesUsingBlock:(/*^block*/id)arg1 ;
-(id)description;
-(id)_init;
-(void)_createGroupIndex;
-(void)reloadWithSpecifiers:(id)arg1 ;
-(id)_initForCopyWithGroupIndex:(id)arg1 ;
-(id)_ungroupedPrefixSpecifiers;
-(unsigned long long)indexOfGroupAtGroupIndex:(unsigned long long)arg1 ;
-(void)performUpdateOperation:(id)arg1 forSpecifierUpdates:(id)arg2 ;
-(id)_tabStringOfDepth:(unsigned long long)arg1 ;
-(id)_groupSections;
-(void)_willPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2 ;
-(unsigned long long)numberOfRowsInGroupAtIndex:(unsigned long long)arg1 ;
-(void)_getSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3 forInsertion:(BOOL)arg4 ;
-(id)indexPathForSpecifierAtIndex:(unsigned long long)arg1 ;
-(void)_didPerformOperation:(id)arg1 forSpecifierUpdates:(id)arg2 ;
-(NSRange)rangeOfSpecifiersInGroup:(id)arg1 ;
-(void)_getSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3 forInsertion:(BOOL)arg4 allowGroupSpecifiers:(BOOL)arg5 ;
-(unsigned long long)_indexOfSpecifierInSection:(unsigned long long)arg1 row:(unsigned long long)arg2 forInsertion:(BOOL)arg3 ;
-(id)specifiersInGroupAtGroupIndex:(unsigned long long)arg1 ;
-(id)indexPathForSpecifierAtIndex:(unsigned long long)arg1 forInsertion:(BOOL)arg2 ;
-(BOOL)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifierWithID:(id)arg3 ;
-(void)_appendDescriptionOfArray:(id)arg1 toString:(id)arg2 withTabLevel:(unsigned long long)arg3 ;
-(void)_manuallyFindSection:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 forSpecifierAtIndex:(unsigned long long)arg3 ;
-(id)indexPathForSpecifierWithID:(id)arg1 ;
-(NSRange)rangeOfSpecifiersInGroupWithID:(id)arg1 ;
-(id)specifiersInGroupWithID:(id)arg1 ;
-(unsigned long long)indexOfGroupWithID:(id)arg1 ;
-(id)_synthesizedSpecifiersFromGroupIndex;
-(BOOL)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifier:(id)arg3 ;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(BOOL)getGroup:(out unsigned long long*)arg1 row:(out unsigned long long*)arg2 ofSpecifierAtIndex:(unsigned long long)arg3 ;
-(id)specifiersInGroup:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)indexPathForSpecifier:(id)arg1 ;
-(void)performSpecifierUpdates:(id)arg1 ;
-(id)specifierAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfGroups;
@end

