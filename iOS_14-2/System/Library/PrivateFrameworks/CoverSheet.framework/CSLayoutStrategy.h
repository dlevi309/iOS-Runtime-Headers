/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSPersistentContentLayoutProvidingCSDateTimeLayoutAggregating;
#import <CoverSheet/CoverSheet-Structs.h>
@interface CSLayoutStrategy : NSObject {

	id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> _persistentLayout;

}

@property (assign,nonatomic,__weak) id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> persistentLayout;              //@synthesize persistentLayout=_persistentLayout - In the implementation block
-(UIEdgeInsets)suggestedContentInsetsForListForPage:(id)arg1 ;
-(double)_customListWidthForPage:(id)arg1 startingBounds:(CGRect)arg2 ;
-(CGRect)suggestedVisibleFrameForSleeveInScreenCoordinates:(CGRect)arg1 forceCenteredX:(BOOL)arg2 ;
-(unsigned long long)_listLayoutForPage:(id)arg1 ;
-(CGRect)suggestedFrameForDateTimeViewInScreenCoordinates:(CGRect)arg1 forceCenteredX:(BOOL)arg2 ;
-(void)setPersistentLayout:(id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating>)arg1 ;
-(id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating>)persistentLayout;
-(double)_listInsetXForPage:(id)arg1 ;
-(CGRect)suggestedFrameForListForPage:(id)arg1 bounds:(CGRect)arg2 ;
-(unsigned long long)_listWidthStrategyForPage:(id)arg1 ;
@end

