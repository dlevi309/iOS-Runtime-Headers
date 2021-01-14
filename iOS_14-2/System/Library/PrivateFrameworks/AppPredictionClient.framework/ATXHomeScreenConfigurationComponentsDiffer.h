/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSOrderedCollectionDifference, NSArray;

@interface ATXHomeScreenConfigurationComponentsDiffer : NSObject {

	NSOrderedCollectionDifference* _pinnedWidgetsDifference;
	NSOrderedCollectionDifference* _stackedWidgetsDifference;
	NSOrderedCollectionDifference* _stacksDifference;

}

@property (nonatomic,readonly) NSArray * addedPinnedWidgets; 
@property (nonatomic,readonly) NSArray * deletedPinnedWidgets; 
@property (nonatomic,readonly) NSArray * addedStackedWidgets; 
@property (nonatomic,readonly) NSArray * deletedStackedWidgets; 
@property (nonatomic,readonly) NSArray * addedStacks; 
@property (nonatomic,readonly) NSArray * deletedStacks; 
-(NSArray *)addedPinnedWidgets;
-(NSArray *)addedStacks;
-(NSArray *)deletedPinnedWidgets;
-(NSArray *)deletedStacks;
-(id)initWithPreviousComponents:(id)arg1 currentComponents:(id)arg2 ;
-(NSArray *)addedStackedWidgets;
-(NSArray *)deletedStackedWidgets;
@end

