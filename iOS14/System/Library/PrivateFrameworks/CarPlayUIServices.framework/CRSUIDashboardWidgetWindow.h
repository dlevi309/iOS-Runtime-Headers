/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CRSUIWindow.h>
#import <libobjc.A.dylib/CRSUIDashboardWidgetWindowClient.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSArray, NSXPCConnection, UIColor, NSString;

@interface CRSUIDashboardWidgetWindow : CRSUIWindow <CRSUIDashboardWidgetWindowClient, BSInvalidatable> {

	BOOL _useSystemPrimaryFocusColor;
	NSArray* _widgetSizes;
	NSXPCConnection* _dashboardWindowServiceConnection;
	NSArray* _focusableItems;

}

@property (nonatomic,retain) NSXPCConnection * dashboardWindowServiceConnection;              //@synthesize dashboardWindowServiceConnection=_dashboardWindowServiceConnection - In the implementation block
@property (nonatomic,retain) NSArray * focusableItems;                                        //@synthesize focusableItems=_focusableItems - In the implementation block
@property (nonatomic,retain) NSArray * widgetSizes;                                           //@synthesize widgetSizes=_widgetSizes - In the implementation block
@property (assign,nonatomic) BOOL useSystemPrimaryFocusColor;                                 //@synthesize useSystemPrimaryFocusColor=_useSystemPrimaryFocusColor - In the implementation block
@property (nonatomic,readonly) UIColor * focusHighlightColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIColor *)focusHighlightColor;
-(void)_invalidateConnection;
-(NSArray *)widgetSizes;
-(void)setWidgetSizes:(NSArray *)arg1 ;
-(void)invalidate;
-(id)initWithWindowScene:(id)arg1 ;
-(void)dealloc;
-(void)setFocusableViews:(id)arg1 ;
-(void)setNeedsLargeSize:(BOOL)arg1 animationSettings:(id)arg2 ;
-(void)hostFocusableItem:(id)arg1 pressed:(BOOL)arg2 ;
-(void)hostSelectedFocusableItem:(id)arg1 ;
-(void)hostFocusableItem:(id)arg1 focused:(BOOL)arg2 ;
-(void)hostSetWidgetSizes:(id)arg1 ;
-(void)hostSetUseSystemPrimaryFocusColor:(BOOL)arg1 ;
-(void)setDashboardWindowServiceConnection:(NSXPCConnection *)arg1 ;
-(void)_windowDidCreateContext:(id)arg1 ;
-(void)_invalidateCurrentFocusableItems;
-(NSXPCConnection *)dashboardWindowServiceConnection;
-(void)setFocusableItems:(NSArray *)arg1 ;
-(NSArray *)focusableItems;
-(BOOL)useSystemPrimaryFocusColor;
-(id)_focusableItemForClientItem:(id)arg1 ;
-(id)_clientFocusableItemForItem:(id)arg1 ;
-(void)setUseSystemPrimaryFocusColor:(BOOL)arg1 ;
@end

