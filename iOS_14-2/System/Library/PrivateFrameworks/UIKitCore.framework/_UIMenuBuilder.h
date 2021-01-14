/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIMenuBuilder.h>

@class UIMenuSystem, NSArray;

@interface _UIMenuBuilder : NSObject <NSCopying, UIMenuBuilder> {

	SCD_Struct_UI115 _analysis;
	NSArray* _keyCommandsCache;
	UIMenuSystem* _system;
	unsigned long long __changeCount;
	unsigned long long __actualChangeCount;

}

@property (assign,nonatomic,__weak) UIMenuSystem * system;                         //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) unsigned long long _changeCount;                    //@synthesize _changeCount=__changeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long _actualChangeCount;              //@synthesize _actualChangeCount=__actualChangeCount - In the implementation block
@property (nonatomic,readonly) NSArray * _keyCommands; 
-(void)_insertMenu:(id)arg1 intoParentMenu:(id)arg2 newParentMenu:(/*^block*/id)arg3 ;
-(void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2 ;
-(void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2 ;
-(void)_patch:(id)arg1 ;
-(unsigned long long)_actualChangeCount;
-(unsigned long long)_changeCount;
-(id)menuForIdentifier:(id)arg1 ;
-(id)actionForIdentifier:(id)arg1 ;
-(void)_replaceMenu:(id)arg1 withMenu:(id)arg2 ;
-(id)initWithSystem:(id)arg1 analysis:(SCD_Struct_UI116)arg2 ;
-(void)setSystem:(UIMenuSystem *)arg1 ;
-(NSArray *)_keyCommands;
-(void)_recacheCommandsIfNeeded;
-(BOOL)_isInternallyConsistent;
-(UIMenuSystem *)system;
-(void)_setNeedsRecacheCommands;
-(void)_patchInternalDiff:(id)arg1 ;
-(id)_firstValidMenuWithinIdentifiers:(id)arg1 ;
-(id)_internalDiffForDiffv1:(id)arg1 ;
-(id)commandForAction:(SEL)arg1 propertyList:(id)arg2 ;
-(void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(/*^block*/id)arg2 ;
-(void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2 ;
-(void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2 ;
-(id)_parentOfMenuForIdentifier:(id)arg1 commandForIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRootMenu:(id)arg1 ;
-(void)removeMenuForIdentifier:(id)arg1 ;
-(void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2 ;
@end

