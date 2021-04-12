/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)index;
-(NSNumber *)toIndex;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 removingGroupSpecifierRemovesEntireGroup:(BOOL)arg5 ;
-(long long)operation;
-(void)setIndex:(NSNumber *)arg1 ;
-(id)initWithOperation:(long long)arg1 specifier:(id)arg2 index:(id)arg3 ;
-(id)initWithOperation:(long long)arg1 specifier:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4 ;
-(void)setRemovingGroupSpecifierRemovesEntireGroup:(BOOL)arg1 ;
-(BOOL)removingGroupSpecifierRemovesEntireGroup;
-(id)description;
-(BOOL)applyToArray:(id)arg1 ;
-(void)setToIndex:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

