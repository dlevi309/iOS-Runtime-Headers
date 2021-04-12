/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UISearchBarTextField, UIView, _UINavigationControllerPalette, UISearchController;


@protocol _UISearchBarVisualProvidingDelegate <NSObject>
@property (assign,nonatomic,__weak) id<UISearchBarDelegate><UISearchBarDelegate_Private> delegate; 
@property (getter=_searchBarTextField,nonatomic,readonly) UISearchBarTextField * searchBarTextField; 
@property (nonatomic,readonly) UIView * _viewForChildViews; 
@property (nonatomic,readonly) _UINavigationControllerPalette * _containingNavigationPalette; 
@property (nonatomic,readonly) long long barPosition; 
@property (nonatomic,readonly) UISearchController * _searchController; 
@property (nonatomic,readonly) long long _expectedInterfaceOrientation; 
@property (nonatomic,readonly) BOOL _effectivelySupportsDynamicType; 
@property (nonatomic,readonly) Class _classForSearchTextField; 
@required
-(id)textInputTraits;
-(id<UISearchBarDelegate><UISearchBarDelegate_Private>)delegate;
-(void)setDelegate:(id)arg1;
-(long long)barPosition;
-(UISearchController *)_searchController;
-(id)_searchBarTextField;
-(Class)_classForSearchTextField;
-(long long)_expectedInterfaceOrientation;
-(BOOL)_effectivelySupportsDynamicType;
-(UIView *)_viewForChildViews;
-(_UINavigationControllerPalette *)_containingNavigationPalette;

@end

