/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)applyLayout;
-(UIView *)scopeBar;
-(void)updateLayout;
-(BOOL)isCollapsed;
-(double)naturalBarHeight;
-(id<_UISearchBarContainerSublayoutDelegate>)delegate;
-(CGRect)scopeBarLayoutFrame;
-(void)setNeighboringSearchLayout:(_UISearchBarSearchContainerLayout *)arg1 ;
-(unsigned long long)numberOfScopeTitles;
-(void)setNumberOfScopeTitles:(unsigned long long)arg1 ;
-(UIEdgeInsets)containerSpecificInsets;
-(BOOL)hasScopeBar;
-(void)setDelegate:(id<_UISearchBarContainerSublayoutDelegate>)arg1 ;
-(double)scopeBarOpacity;
-(void)setScopeBar:(UIView *)arg1 ;
-(double)scopeControlHeight;
-(void)setCollapsed:(BOOL)arg1 ;
-(_UISearchBarSearchContainerLayout *)neighboringSearchLayout;
-(void)setHasScopeBar:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

