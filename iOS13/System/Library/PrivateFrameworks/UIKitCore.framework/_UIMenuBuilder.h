/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIMenuBuilder.h>

@class UIMenuSystem, NSArray;

@interface _UIMenuBuilder : NSObject <NSCopying, UIMenuBuilder> {

	SCD_Struct_UI105 _analysis;
	NSArray* _keyCommandsCache;
	UIMenuSystem* _system;
	unsigned long long __changeCount;
	unsigned long long __actualChangeCount;

}

@property (assign,nonatomic,__weak) UIMenuSystem * system;                         //@synthesize system=_system - In the implementation block
@property (nonatomic,readonly) unsigned long long _changeCount;                    //@synthesize _changeCount=__changeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long _actualChangeCount;              //@synthesize _actualChangeCount=__actualChangeCount - In the implementation block
@property (nonatomic,readonly) NSArray * _keyCommands; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)_keyCommands;
-(unsigned long long)_changeCount;
-(UIMenuSystem *)system;
-(void)_patch:(id)arg1 ;
-(id)initWithSystem:(id)arg1 analysis:(SCD_Struct_UI106)arg2 ;
-(id)menuForIdentifier:(id)arg1 ;
-(void)_recacheCommandsIfNeeded;
-(void)_replaceMenu:(id)arg1 withMenu:(id)arg2 ;
-(void)_setNeedsRecacheCommands;
-(void)replaceMenuForIdentifier:(id)arg1 withMenu:(id)arg2 ;
-(void)_insertMenu:(id)arg1 intoParentMenu:(id)arg2 newParentMenu:(/*^block*/id)arg3 ;
-(id)actionForIdentifier:(id)arg1 ;
-(id)commandForAction:(SEL)arg1 propertyList:(id)arg2 ;
-(void)replaceChildrenOfMenuForIdentifier:(id)arg1 fromChildrenBlock:(/*^block*/id)arg2 ;
-(void)insertSiblingMenu:(id)arg1 beforeMenuForIdentifier:(id)arg2 ;
-(void)insertSiblingMenu:(id)arg1 afterMenuForIdentifier:(id)arg2 ;
-(void)insertChildMenu:(id)arg1 atStartOfMenuForIdentifier:(id)arg2 ;
-(void)insertChildMenu:(id)arg1 atEndOfMenuForIdentifier:(id)arg2 ;
-(void)removeMenuForIdentifier:(id)arg1 ;
-(id)initWithRootMenu:(id)arg1 ;
-(id)_menuForMenu:(id)arg1 ;
-(id)_parentOfMenuForIdentifier:(id)arg1 commandForIdentifier:(id)arg2 ;
-(id)_firstValidMenuWithinIdentifiers:(id)arg1 ;
-(BOOL)_isInternallyConsistent;
-(void)setSystem:(UIMenuSystem *)arg1 ;
-(unsigned long long)_actualChangeCount;
-(id)_internalDiffForDiffv1:(id)arg1 ;
-(void)_patchInternalDiff:(id)arg1 ;
@end

