/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, PSSpecifierGroupIndex, NSArray, PSSpecifierUpdateContext;

@interface PSSpecifierUpdates : NSObject <NSCopying> {

	NSMutableArray* _currentSpecifiers;
	NSMutableArray* _updates;
	PSSpecifierGroupIndex* _groupIndex;
	BOOL _wantsDebugCallbacks;
	NSArray* _originalSpecifiers;
	PSSpecifierUpdateContext* _context;

}

@property (nonatomic,copy,readonly) NSArray * originalSpecifiers;                    //@synthesize originalSpecifiers=_originalSpecifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * currentSpecifiers; 
@property (nonatomic,copy,readonly) NSArray * updates; 
@property (nonatomic,copy) PSSpecifierUpdateContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) PSSpecifierGroupIndex * groupIndex; 
+(void)_assertSpecifierIDsAreUnique:(id)arg1 ;
+(BOOL)_wantsDebugCallbacks;
+(Class)_groupIndexClass;
+(id)updatesByDiffingSpecifiers:(id)arg1 withSpecifiers:(id)arg2 changedBlock:(/*^block*/id)arg3 ;
+(id)updatesWithSpecifiers:(id)arg1 ;
-(NSArray *)updates;
-(id)initWithSpecifiers:(id)arg1 ;
-(void)_didApplyOperation:(id)arg1 ;
-(BOOL)reloadSpecifierAtIndexPath:(id)arg1 ;
-(id)_groupIndexCreatingIfNecessary;
-(id)init;
-(BOOL)appendSpecifier:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2 ;
-(id)stepByStepDescription;
-(BOOL)removeSpecifiersInGroupWithID:(id)arg1 ;
-(BOOL)insertContiguousSpecifiers:(id)arg1 afterSpecifierWithID:(id)arg2 ;
-(BOOL)insertContiguousSpecifiers:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)reloadSpecifiersInGroupWithID:(id)arg1 ;
-(BOOL)reloadSpecifiers:(id)arg1 ;
-(BOOL)insertSpecifier:(id)arg1 afterSpecifierWithID:(id)arg2 ;
-(BOOL)appendSpecifier:(id)arg1 ;
-(BOOL)removeSpecifiersWithIDs:(id)arg1 ;
-(id)specifierForID:(id)arg1 ;
-(BOOL)removeSpecifierAtIndex:(unsigned long long)arg1 ;
-(BOOL)removeSpecifiersInRange:(NSRange)arg1 ;
-(BOOL)appendSpecifiers:(id)arg1 ;
-(PSSpecifierUpdateContext *)context;
-(BOOL)removeSpecifierWithID:(id)arg1 ;
-(BOOL)swapSpecifier:(id)arg1 withSpecifier:(id)arg2 ;
-(BOOL)removeSpecifiersInGroup:(id)arg1 ;
-(BOOL)insertSpecifier:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)appendSpecifier:(id)arg1 toGroupWithID:(id)arg2 ;
-(BOOL)reloadSpecifiersWithIDs:(id)arg1 ;
-(id)description;
-(BOOL)appendSpecifiers:(id)arg1 toGroupAtGroupIndex:(unsigned long long)arg2 ;
-(BOOL)removeSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1 ;
-(BOOL)_addAndApplyOperation:(id)arg1 ;
-(BOOL)_removeOneSpecifierOnlyAtIndex:(unsigned long long)arg1 ;
-(BOOL)moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)removeSpecifiers:(id)arg1 ;
-(BOOL)insertSpecifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfSpecifierWithID:(id)arg1 ;
-(BOOL)appendSpecifier:(id)arg1 toGroup:(id)arg2 ;
-(BOOL)appendSpecifiers:(id)arg1 toGroupWithID:(id)arg2 ;
-(BOOL)appendSpecifiers:(id)arg1 toGroup:(id)arg2 ;
-(BOOL)reloadSpecifiersInGroupAtGroupIndex:(unsigned long long)arg1 ;
-(BOOL)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 ;
-(id)initWithSpecifiers:(id)arg1 applyUpdates:(id)arg2 ;
-(BOOL)removeSpecifier:(id)arg1 ;
-(void)enumerateUpdatesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)reloadSpecifierAtIndex:(unsigned long long)arg1 ;
-(BOOL)swapSpecifierAtIndex:(unsigned long long)arg1 withSpecifierAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfSpecifier:(id)arg1 ;
-(id)_initForCopyWithOriginalSpecifiers:(id)arg1 currentSpecifiers:(id)arg2 updates:(id)arg3 ;
-(BOOL)reloadSpecifiersInRange:(NSRange)arg1 ;
-(id)_init;
-(NSArray *)currentSpecifiers;
-(BOOL)moveSpecifierAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(PSSpecifierGroupIndex *)groupIndex;
-(void)_operationFailed:(id)arg1 reason:(id)arg2 ;
-(NSArray *)originalSpecifiers;
-(BOOL)removeSpecifierAtIndexPath:(id)arg1 ;
-(BOOL)_enumerateArrayWithConjuctionalResult:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 ;
-(BOOL)reloadSpecifier:(id)arg1 ;
-(BOOL)moveSpecifier:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)reloadSpecifierWithID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)reloadSpecifiersInGroup:(id)arg1 ;
-(id)specifiersAfterApplyingUpdatesToIndex:(unsigned long long)arg1 ;
-(void)setContext:(PSSpecifierUpdateContext *)arg1 ;
@end

