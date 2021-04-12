/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject {

	BOOL _invalidatedSpecifiers;
	NSMutableSet* _searchEntries;
	PSSpecifierUpdates* _specifierUpdates;

}

@property (nonatomic,retain) NSMutableSet * searchEntries;                       //@synthesize searchEntries=_searchEntries - In the implementation block
@property (nonatomic,retain) PSSpecifierUpdates * specifierUpdates;              //@synthesize specifierUpdates=_specifierUpdates - In the implementation block
@property (assign,nonatomic) BOOL invalidatedSpecifiers;                         //@synthesize invalidatedSpecifiers=_invalidatedSpecifiers - In the implementation block
+(id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2 ;
+(id)deferredInvalidationUpdatesWithEntries:(id)arg1 ;
-(id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(BOOL)arg3 ;
-(NSMutableSet *)searchEntries;
-(void)setSearchEntries:(NSMutableSet *)arg1 ;
-(PSSpecifierUpdates *)specifierUpdates;
-(void)setSpecifierUpdates:(PSSpecifierUpdates *)arg1 ;
-(BOOL)invalidatedSpecifiers;
-(void)setInvalidatedSpecifiers:(BOOL)arg1 ;
@end

