/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <AccessibilityUIUtilities/AXCyclingView.h>

@protocol OS_os_log;
@class NSArray, NSObject, AXElementNamesStyleProvider, NSMutableArray;

@interface AXElementNamesView : AXCyclingView {

	BOOL _didUpdateItems;
	NSArray* _items;
	NSObject*<OS_os_log> _loggingFacility;
	AXElementNamesStyleProvider* _styleProvider;
	NSMutableArray* _containers;
	CGRect _boundsForLastReload;

}

@property (assign,nonatomic) CGRect boundsForLastReload;                               //@synthesize boundsForLastReload=_boundsForLastReload - In the implementation block
@property (assign,nonatomic) BOOL didUpdateItems;                                      //@synthesize didUpdateItems=_didUpdateItems - In the implementation block
@property (nonatomic,retain) NSArray * items;                                          //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> loggingFacility;                     //@synthesize loggingFacility=_loggingFacility - In the implementation block
@property (nonatomic,retain) AXElementNamesStyleProvider * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) NSMutableArray * containers;                            //@synthesize containers=_containers - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSMutableArray *)containers;
-(void)setStyleProvider:(AXElementNamesStyleProvider *)arg1 ;
-(NSObject*<OS_os_log>)loggingFacility;
-(AXElementNamesStyleProvider *)styleProvider;
-(void)setDidUpdateItems:(BOOL)arg1 ;
-(CGRect)boundsForLastReload;
-(BOOL)didUpdateItems;
-(void)setBoundsForLastReload:(CGRect)arg1 ;
-(void)_reloadViews;
-(void)_arrangeNameViews:(id)arg1 withinContainer:(id)arg2 ;
-(void)_adjustLabelPositionForView:(id)arg1 toAvoidCollidingWithView:(id)arg2 ;
-(id)viewsInCycle;
-(void)setLoggingFacility:(NSObject*<OS_os_log>)arg1 ;
@end

