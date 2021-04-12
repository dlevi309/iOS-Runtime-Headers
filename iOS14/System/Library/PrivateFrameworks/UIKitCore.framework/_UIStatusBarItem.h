/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIStatusBarIdentifier, NSMutableDictionary, _UIStatusBar, NSSet;

@interface _UIStatusBarItem : NSObject {

	BOOL _needsUpdate;
	_UIStatusBarIdentifier* _identifier;
	NSMutableDictionary* _displayItems;
	_UIStatusBar* _statusBar;

}

@property (nonatomic,retain) NSMutableDictionary * displayItems;                 //@synthesize displayItems=_displayItems - In the implementation block
@property (__weak,readonly) _UIStatusBar * statusBar;                            //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) _UIStatusBarIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSSet * dependentEntryKeys; 
@property (nonatomic,readonly) BOOL needsUpdate;                                 //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2 ;
+(id)itemIdentifierFromString:(id)arg1 ;
+(Class)itemClassForIdentifier:(id)arg1 ;
+(id)itemIdentifierForDisplayItemIdentifier:(id)arg1 ;
+(id)createItemForIdentifier:(id)arg1 statusBar:(id)arg2 ;
+(id)defaultDisplayIdentifier;
+(id)identifier;
+(id)displayItemIdentifierFromString:(id)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(NSSet *)dependentEntryKeys;
-(void)setDisplayItems:(NSMutableDictionary *)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate;
-(_UIStatusBar *)statusBar;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)updatedDisplayItemsWithData:(id)arg1 ;
-(id)displayItemForIdentifier:(id)arg1 ;
-(id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(NSMutableDictionary *)displayItems;
-(id)description;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(_UIStatusBarIdentifier *)identifier;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2 ;
@end

