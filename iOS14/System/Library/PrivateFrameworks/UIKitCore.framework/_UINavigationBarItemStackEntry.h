/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)entryForItem:(id)arg1 replaceExistingWithNew:(BOOL)arg2 ;
+(id)newEntryForItem:(id)arg1 ;
-(_UINavigationBarLayout *)normalLayout;
-(_UINavigationBarLayout *)searchLayout;
-(void)setSearchActive:(BOOL)arg1 ;
-(UINavigationItem *)item;
-(void)setSearchLayout:(_UINavigationBarLayout *)arg1 ;
-(_UINavigationBarLayout *)activeLayout;
-(id)description;
-(BOOL)isSearchActive;
-(_UINavigationBarLayout *)inactiveLayout;
-(void)updateStateFromCounterpart:(id)arg1 ;
-(void)setNormalLayout:(_UINavigationBarLayout *)arg1 ;
-(void)dealloc;
@end

