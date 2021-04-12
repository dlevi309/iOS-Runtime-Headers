/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ComplicationDisplay.framework/ComplicationDisplay
*/


@protocol CLKMonochromeComplicationView <NSObject>
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
@required
-(void)setFilterProvider:(id)arg1;
-(void)transitionToMonochromeWithFraction:(double)arg1;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;

@end

