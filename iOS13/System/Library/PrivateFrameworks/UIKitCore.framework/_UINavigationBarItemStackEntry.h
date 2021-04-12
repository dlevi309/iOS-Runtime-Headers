/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UINavigationItem, _UINavigationBarLayout;

@interface _UINavigationBarItemStackEntry : NSObject {

	BOOL _searchActive;
	UINavigationItem* _item;
	_UINavigationBarLayout* _normalLayout;
	_UINavigationBarLayout* _searchLayout;

}

@property (nonatomic,readonly) UINavigationItem * item;                              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) _UINavigationBarLayout * activeLayout; 
@property (nonatomic,readonly) _UINavigationBarLayout * inactiveLayout; 
@property (assign,getter=isSearchActive,nonatomic) BOOL searchActive;                //@synthesize searchActive=_searchActive - In the implementation block
@property (nonatomic,retain) _UINavigationBarLayout * normalLayout;                  //@synthesize normalLayout=_normalLayout - In the implementation block
@property (nonatomic,retain) _UINavigationBarLayout * searchLayout;                  //@synthesize searchLayout=_searchLayout - In the implementation block
+(id)newEntryForItem:(id)arg1 ;
+(id)entryForItem:(id)arg1 replaceExistingWithNew:(BOOL)arg2 ;
-(void)dealloc;
-(id)description;
-(UINavigationItem *)item;
-(void)updateStateFromCounterpart:(id)arg1 ;
-(_UINavigationBarLayout *)activeLayout;
-(BOOL)isSearchActive;
-(_UINavigationBarLayout *)inactiveLayout;
-(void)setSearchActive:(BOOL)arg1 ;
-(_UINavigationBarLayout *)normalLayout;
-(void)setNormalLayout:(_UINavigationBarLayout *)arg1 ;
-(_UINavigationBarLayout *)searchLayout;
-(void)setSearchLayout:(_UINavigationBarLayout *)arg1 ;
@end

