/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphViewController.h>
#import <libobjc.A.dylib/HKGraphViewDelegate.h>

@class NSString;

@interface HKDateGraphViewController : HKGraphViewController <HKGraphViewDelegate> {

	BOOL _hasSetVisibleDateRange;
	BOOL _disableXAxis;
	long long _dayScopeType;
	CGSize _minimumSize;

}

@property (assign,nonatomic) CGSize minimumSize;                    //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) BOOL disableXAxis;                     //@synthesize disableXAxis=_disableXAxis - In the implementation block
@property (assign,nonatomic) long long dayScopeType;                //@synthesize dayScopeType=_dayScopeType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)setMinimumSize:(CGSize)arg1 ;
-(CGSize)minimumSize;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)setDetailView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setDisableXAxis:(BOOL)arg1 ;
-(id)initWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3 ;
-(void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3 ;
-(void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2 ;
-(BOOL)disableXAxis;
-(void)_setupGraphViewSelectionStyle;
-(id)_createGraphViewWithDateZoom:(long long)arg1 previousDateZoom:(long long)arg2 previousXAxisSpace:(double)arg3 ;
-(void)setDayScopeType:(long long)arg1 ;
-(id)_dateAxisStyle;
-(id)_xAxisLabelFont;
-(void)_marginStyleChangeForContext:(long long)arg1 graphView:(id)arg2 ;
-(long long)dayScopeType;
@end

