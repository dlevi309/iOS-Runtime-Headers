/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVShelfView.h>
#import <TVMLKit/TVRowHosting_Collection.h>

@class NSString;

@interface _TVMLShelfView : _TVShelfView <TVRowHosting_Collection> {

	double _showcaseFactor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(void)tv_setShowcaseFactor:(double)arg1 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1 ;
-(BOOL)shouldBindRowsTogether;
-(id)initWithFrame:(CGRect)arg1 shelfViewLayout:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 _shelfViewLayout:(id)arg2 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long*)arg3 ;
-(id)_rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long*)arg3 forShowcase:(BOOL)arg4 ;
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)_selectionMarginsForCell:(id)arg1 ;
@end

