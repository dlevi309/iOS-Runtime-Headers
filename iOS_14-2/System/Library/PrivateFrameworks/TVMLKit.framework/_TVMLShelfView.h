/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVShelfView.h>
#import <TVMLKit/TVRowHosting_Collection.h>

@class NSString;

@interface _TVMLShelfView : _TVShelfView <TVRowHosting_Collection> {

	double _showcaseFactor;

}

@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1 ;
-(BOOL)shouldBindRowsTogether;
-(void)tv_setShowcaseFactor:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shelfViewLayout:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 _shelfViewLayout:(id)arg2 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long*)arg3 ;
-(id)_rowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 firstItemRowIndex:(long long*)arg3 forShowcase:(BOOL)arg4 ;
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(UIEdgeInsets)_selectionMarginsForCell:(id)arg1 ;
@end

