/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeaderView:(UIView *)arg1 ;
-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long*)arg3 ;
-(BOOL)configureForListTemplate;
-(void)setConfigureForListTemplate:(BOOL)arg1 ;
@end

