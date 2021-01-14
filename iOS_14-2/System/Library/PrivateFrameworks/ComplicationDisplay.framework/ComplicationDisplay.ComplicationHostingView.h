/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ComplicationDisplay.framework/ComplicationDisplay
*/

#import <ComplicationDisplay/ComplicationDisplay-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@class NSData;

@interface ComplicationDisplay.ComplicationHostingView : UIView <CLKMonochromeComplicationView> {

	 filterProvider;
	 inPreview;
	 model;
	 isMonochrome;
	 hostingViewController;
	 hostingViewWrapper;
	 rendersAsynchronously;
	 renderStatsHandler;
	 shouldCallRenderStatsHandlerOnMainQueue;
	 shouldAccentDesaturatedView;
	 supportsComplicationForeground;
	 viewData;
	 paused;

}

@property (retain,nonatomic) id<CLKMonochromeFilterProvider> filterProvider; 
@property (readonly,nonatomic) BOOL rendersAsynchronously; 
@property (copy,nonatomic) id renderStatsHandler; 
@property (assign,nonatomic) BOOL shouldCallRenderStatsHandlerOnMainQueue; 
@property (assign,nonatomic) BOOL shouldAccentDesaturatedView; 
@property (assign,nonatomic) BOOL supportsComplicationForeground; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) CGRect bounds; 
@property (copy,nonatomic) NSData * viewData; 
@property (assign,nonatomic) BOOL paused; 
+(id)sync;
+(id)async;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(CGRect)bounds;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(CGRect)frame;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)rendersAsynchronously;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)paused;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setRenderStatsHandler:(id)arg1 ;
-(void)setViewData:(NSData *)arg1 ;
-(void)setShouldAccentDesaturatedView:(BOOL)arg1 ;
-(id)renderStatsHandler;
-(void)setShouldCallRenderStatsHandlerOnMainQueue:(BOOL)arg1 ;
-(void)waitForAsyncRendering;
-(id)initWithFrame:(CGRect)arg1 async:(BOOL)arg2 ;
-(BOOL)shouldCallRenderStatsHandlerOnMainQueue;
-(BOOL)shouldAccentDesaturatedView;
-(BOOL)supportsComplicationForeground;
-(void)setSupportsComplicationForeground:(BOOL)arg1 ;
-(NSData *)viewData;
@end

