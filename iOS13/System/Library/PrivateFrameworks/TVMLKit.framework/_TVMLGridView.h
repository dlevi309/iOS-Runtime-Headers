/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVGridView.h>
#import <TVMLKit/TVRowHosting_Collection.h>

@class UIView, NSString;

@interface _TVMLGridView : _TVGridView <TVRowHosting_Collection> {

	BOOL _configureForListTemplate;
	UIView* _headerView;

}

@property (assign,nonatomic) BOOL configureForListTemplate;              //@synthesize configureForListTemplate=_configureForListTemplate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                        //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long*)arg3 ;
-(BOOL)configureForListTemplate;
-(void)setConfigureForListTemplate:(BOOL)arg1 ;
@end

