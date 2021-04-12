/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol CSPersistentContentLayoutProvidingCSDateTimeLayoutAggregating;
#import <CoverSheet/CoverSheet-Structs.h>
@interface CSLayoutStrategy : NSObject {

	id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> _persistentLayout;

}

@property (assign,nonatomic,__weak) id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> persistentLayout;              //@synthesize persistentLayout=_persistentLayout - In the implementation block
-(unsigned long long)_listLayoutForPage:(id)arg1 ;
-(double)_customListWidthForPage:(id)arg1 startingBounds:(CGRect)arg2 ;
-(double)_listInsetXForPage:(id)arg1 ;
-(id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating>)persistentLayout;
-(unsigned long long)_listWidthStrategyForPage:(id)arg1 ;
-(CGRect)suggestedFrameForDateTimeViewInScreenCoordinates:(CGRect)arg1 forceCenteredX:(BOOL)arg2 ;
-(CGRect)suggestedFrameForListForPage:(id)arg1 bounds:(CGRect)arg2 ;
-(UIEdgeInsets)suggestedContentInsetsForListForPage:(id)arg1 ;
-(void)setPersistentLayout:(id<CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating>)arg1 ;
@end

