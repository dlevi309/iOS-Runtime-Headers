/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@class ATXDefaultWidgetStack, NSArray;

@interface ATXDefaultHomeScreenItemUpdate : NSObject {

	BOOL _shouldSuggestStackInGallery;
	ATXDefaultWidgetStack* _stack;
	ATXDefaultWidgetStack* _todayStack;
	NSArray* _smallWidgets;
	NSArray* _mediumWidgets;
	NSArray* _largeWidgets;

}

@property (nonatomic,readonly) ATXDefaultWidgetStack * stack;                   //@synthesize stack=_stack - In the implementation block
@property (nonatomic,readonly) ATXDefaultWidgetStack * todayStack;              //@synthesize todayStack=_todayStack - In the implementation block
@property (nonatomic,readonly) NSArray * smallWidgets;                          //@synthesize smallWidgets=_smallWidgets - In the implementation block
@property (nonatomic,readonly) NSArray * mediumWidgets;                         //@synthesize mediumWidgets=_mediumWidgets - In the implementation block
@property (nonatomic,readonly) NSArray * largeWidgets;                          //@synthesize largeWidgets=_largeWidgets - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuggestStackInGallery;                //@synthesize shouldSuggestStackInGallery=_shouldSuggestStackInGallery - In the implementation block
-(ATXDefaultWidgetStack *)stack;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldSuggestStackInGallery;
-(id)initWithStack:(id)arg1 todayStack:(id)arg2 smallWidgets:(id)arg3 mediumWidgets:(id)arg4 largeWidgets:(id)arg5 shouldSuggestStackInGallery:(BOOL)arg6 ;
-(ATXDefaultWidgetStack *)todayStack;
-(NSArray *)smallWidgets;
-(NSArray *)mediumWidgets;
-(NSArray *)largeWidgets;
@end

