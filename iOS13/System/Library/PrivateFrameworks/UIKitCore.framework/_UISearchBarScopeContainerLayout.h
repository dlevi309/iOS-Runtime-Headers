/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UISearchBarLayoutBase.h>

@protocol _UISearchBarContainerSublayoutDelegate;
@class _UISearchBarSearchContainerLayout, UIView;

@interface _UISearchBarScopeContainerLayout : _UISearchBarLayoutBase {

	BOOL _collapsed;
	BOOL _hasScopeBar;
	id<_UISearchBarContainerSublayoutDelegate> _delegate;
	_UISearchBarSearchContainerLayout* _neighboringSearchLayout;
	UIView* _scopeBar;
	unsigned long long _numberOfScopeTitles;
	double _scopeBarOpacity;
	CGRect _scopeBarLayoutFrame;

}

@property (assign,nonatomic,__weak) id<_UISearchBarContainerSublayoutDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                        //@synthesize collapsed=_collapsed - In the implementation block
@property (nonatomic,retain) _UISearchBarSearchContainerLayout * neighboringSearchLayout;              //@synthesize neighboringSearchLayout=_neighboringSearchLayout - In the implementation block
@property (nonatomic,retain) UIView * scopeBar;                                                        //@synthesize scopeBar=_scopeBar - In the implementation block
@property (assign,nonatomic) BOOL hasScopeBar;                                                         //@synthesize hasScopeBar=_hasScopeBar - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfScopeTitles;                                   //@synthesize numberOfScopeTitles=_numberOfScopeTitles - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets containerSpecificInsets; 
@property (nonatomic,readonly) double naturalBarHeight; 
@property (nonatomic,readonly) CGRect scopeBarLayoutFrame;                                             //@synthesize scopeBarLayoutFrame=_scopeBarLayoutFrame - In the implementation block
@property (nonatomic,readonly) double scopeBarOpacity;                                                 //@synthesize scopeBarOpacity=_scopeBarOpacity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<_UISearchBarContainerSublayoutDelegate>)delegate;
-(void)setDelegate:(id<_UISearchBarContainerSublayoutDelegate>)arg1 ;
-(void)updateLayout;
-(UIView *)scopeBar;
-(double)naturalBarHeight;
-(void)applyLayout;
-(void)setNeighboringSearchLayout:(_UISearchBarSearchContainerLayout *)arg1 ;
-(void)setScopeBar:(UIView *)arg1 ;
-(UIEdgeInsets)containerSpecificInsets;
-(void)setHasScopeBar:(BOOL)arg1 ;
-(void)setNumberOfScopeTitles:(unsigned long long)arg1 ;
-(BOOL)hasScopeBar;
-(unsigned long long)numberOfScopeTitles;
-(double)scopeControlHeight;
-(CGRect)scopeBarLayoutFrame;
-(double)scopeBarOpacity;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(_UISearchBarSearchContainerLayout *)neighboringSearchLayout;
@end

