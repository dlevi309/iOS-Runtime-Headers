/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <UIKitCore/UIWindow.h>
#import <libobjc.A.dylib/CRSUIDashboardWidgetWindowClient.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSArray, NSXPCConnection, NSString;

@interface CRSUIDashboardWidgetWindow : UIWindow <CRSUIDashboardWidgetWindowClient, BSInvalidatable> {

	NSArray* _widgetSizes;
	NSXPCConnection* _dashboardWindowServiceConnection;
	NSArray* _focusableItems;

}

@property (nonatomic,retain) NSXPCConnection * dashboardWindowServiceConnection;              //@synthesize dashboardWindowServiceConnection=_dashboardWindowServiceConnection - In the implementation block
@property (nonatomic,retain) NSArray * focusableItems;                                        //@synthesize focusableItems=_focusableItems - In the implementation block
@property (nonatomic,retain) NSArray * widgetSizes;                                           //@synthesize widgetSizes=_widgetSizes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithWindowScene:(id)arg1 ;
-(void)_invalidateConnection;
-(void)setFocusableViews:(id)arg1 ;
-(void)setNeedsLargeSize:(BOOL)arg1 animationSettings:(id)arg2 ;
-(NSArray *)widgetSizes;
-(void)hostFocusableItem:(id)arg1 pressed:(BOOL)arg2 ;
-(void)hostSelectedFocusableItem:(id)arg1 ;
-(void)hostFocusableItem:(id)arg1 focused:(BOOL)arg2 ;
-(void)hostSetWidgetSizes:(id)arg1 ;
-(void)setDashboardWindowServiceConnection:(NSXPCConnection *)arg1 ;
-(void)_windowDidCreateContext:(id)arg1 ;
-(void)_invalidateCurrentFocusableItems;
-(NSXPCConnection *)dashboardWindowServiceConnection;
-(void)setFocusableItems:(NSArray *)arg1 ;
-(NSArray *)focusableItems;
-(id)_focusableItemForClientItem:(id)arg1 ;
-(id)_clientFocusableItemForItem:(id)arg1 ;
-(void)setWidgetSizes:(NSArray *)arg1 ;
@end

