/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class NSMutableDictionary, NSArray;

@interface ATXHomeScreenConfigurationComponents : NSObject {

	NSMutableDictionary* _stackForStackedWidgetIdDictionary;
	NSArray* _pinnedWidgets;
	NSArray* _stackedWidgets;
	NSArray* _stacks;

}

@property (nonatomic,readonly) NSArray * pinnedWidgets;               //@synthesize pinnedWidgets=_pinnedWidgets - In the implementation block
@property (nonatomic,readonly) NSArray * stackedWidgets;              //@synthesize stackedWidgets=_stackedWidgets - In the implementation block
@property (nonatomic,readonly) NSArray * stacks;                      //@synthesize stacks=_stacks - In the implementation block
-(id)init;
-(NSArray *)stacks;
-(id)initWithConfigurations:(id)arg1 ;
-(id)stackForStackedWidget:(id)arg1 ;
-(NSArray *)pinnedWidgets;
-(NSArray *)stackedWidgets;
@end

