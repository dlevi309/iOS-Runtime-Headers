/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBHHomeScreenUsageMonitorObserver.h>

@class SBHIconManager, CHSConfiguredWidgetContainerConsumer, NSString;

@interface SBChronoHomeScreenUsageObserver : NSObject <SBHHomeScreenUsageMonitorObserver> {

	SBHIconManager* _iconManager;
	CHSConfiguredWidgetContainerConsumer* _chronoConsumer;
	unsigned long long _widgetDataGeneration;

}

@property (nonatomic,readonly) SBHIconManager * iconManager;                                       //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,readonly) CHSConfiguredWidgetContainerConsumer * chronoConsumer;              //@synthesize chronoConsumer=_chronoConsumer - In the implementation block
@property (assign,nonatomic) unsigned long long widgetDataGeneration;                              //@synthesize widgetDataGeneration=_widgetDataGeneration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_rebuildAndTransmitConfiguredWidgetData:(id)arg1 ;
-(SBHIconManager *)iconManager;
-(id)_descriptionForArray:(id)arg1 name:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconRemoved:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteCurrentPageIndexChanged:(unsigned long long)arg2 ;
-(unsigned long long)widgetDataGeneration;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconAdded:(id)arg2 ;
-(id)_containerDescriptorForWidgetIcon:(id)arg1 atLocation:(long long)arg2 page:(unsigned long long)arg3 ;
-(CHSConfiguredWidgetContainerConsumer *)chronoConsumer;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteWidgetIconStackChangedActiveWidget:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserDislikedWidgetIconStackSuggestion:(id)arg2 ;
-(void)homeScreenUsageAggregator:(id)arg1 didNoteUserTappedWidgetIcon:(id)arg2 ;
-(void)setWidgetDataGeneration:(unsigned long long)arg1 ;
-(id)initWithIconManager:(id)arg1 ;
@end

