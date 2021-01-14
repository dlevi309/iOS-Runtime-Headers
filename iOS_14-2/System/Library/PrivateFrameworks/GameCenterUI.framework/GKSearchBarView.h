/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol UISearchBarDelegate;
@class GKSearchBar, NSNumber, NSArray, NSString;

@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate> {

	GKSearchBar* _searchBar;
	NSNumber* _usePadConstraints;
	id<UISearchBarDelegate> _delegate;
	NSArray* _searchBarConstraints;
	double _leadingMargin;
	double _trailingMargin;

}

@property (nonatomic,retain) NSArray * searchBarConstraints;                       //@synthesize searchBarConstraints=_searchBarConstraints - In the implementation block
@property (assign,nonatomic) double leadingMargin;                                 //@synthesize leadingMargin=_leadingMargin - In the implementation block
@property (assign,nonatomic) double trailingMargin;                                //@synthesize trailingMargin=_trailingMargin - In the implementation block
@property (nonatomic,retain) GKSearchBar * searchBar;                              //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) NSNumber * usePadConstraints;                         //@synthesize usePadConstraints=_usePadConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<UISearchBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(double)defaultHeight;
+(BOOL)requiresConstraintBasedLayout;
-(void)_UIAppearance_setUsePadConstraints:(id)arg1 ;
-(GKSearchBar *)searchBar;
-(void)setSearchBar:(GKSearchBar *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<UISearchBarDelegate>)delegate;
-(void)prepareForReuse;
-(void)setDelegate:(id<UISearchBarDelegate>)arg1 ;
-(void)updateConstraints;
-(double)leadingMargin;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setUsePadConstraints:(NSNumber *)arg1 ;
-(void)establishSearchBarConstraints;
-(void)setSearchBarConstraints:(NSArray *)arg1 ;
-(NSArray *)searchBarConstraints;
-(NSNumber *)usePadConstraints;
-(double)trailingMargin;
-(void)setLeadingMargin:(double)arg1 ;
-(void)setTrailingMargin:(double)arg1 ;
-(void)dealloc;
@end

