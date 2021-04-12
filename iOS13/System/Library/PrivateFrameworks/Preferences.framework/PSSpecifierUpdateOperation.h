/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSSpecifier, NSNumber;

@interface PSSpecifierUpdateOperation : NSObject <NSCopying> {

	BOOL _removingGroupSpecifierRemovesEntireGroup;
	long long _operation;
	PSSpecifier* _specifier;
	NSNumber* _index;
	NSNumber* _toIndex;

}

@property (nonatomic,readonly) long long operation;                                      //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                    //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) NSNumber * index;                                           //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSNumber * toIndex;                                         //@synthesize toIndex=_toIndex - In the implementation block
@property (assign,nonatomic) BOOL removingGroupSpecifierRemovesEntireGroup;              //@synthesize removingGroupSpecifierRemovesEntireGroup=_removingGroupSpecifierRemovesEntireGroup - In the implementation block
+(id)insertOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)removeOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)_removeOneSpecifierOnlyOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)reloadOperationWithSpecifier:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)moveOperationWithSpecifier:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)index;
-(PSSpecifier *)specifier;
-(long long)operation;
-(void)setIndex:(NSNumber *)arg1 ;
-(NSNumber *)toIndex;
-(void)setToIndex:(NSNumber *)arg1 ;
-(BOOL)applyToArray:(id)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithOperation:(long long)arg1 specifier:(id)arg2 index:(id)arg3 ;
-(id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 removingGroupSpecifierRemovesEntireGroup:(BOOL)arg5 ;
-(id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 ;
-(void)setRemovingGroupSpecifierRemovesEntireGroup:(BOOL)arg1 ;
-(BOOL)removingGroupSpecifierRemovesEntireGroup;
@end

