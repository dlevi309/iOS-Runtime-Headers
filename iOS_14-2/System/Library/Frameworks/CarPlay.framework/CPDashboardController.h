/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <libobjc.A.dylib/CPDashboardClientInterface.h>

@protocol CPDashboardProviding;
@class NSArray, NSXPCConnection, NSString;

@interface CPDashboardController : NSObject <CPDashboardClientInterface> {

	NSArray* _shortcutButtons;
	NSXPCConnection* _connection;
	id<CPDashboardProviding> _dashboardProvider;

}

@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<CPDashboardProviding> dashboardProvider;              //@synthesize dashboardProvider=_dashboardProvider - In the implementation block
@property (nonatomic,copy) NSArray * shortcutButtons;                                 //@synthesize shortcutButtons=_shortcutButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dashboardProvidingInterface;
+(id)_dashboardClientInterface;
-(void)_invalidate;
-(NSXPCConnection *)connection;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(id)_init;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(void)_sceneConnect:(id)arg1 ;
-(void)_connectToListenerEndpoint:(id)arg1 ;
-(id<CPDashboardProviding>)dashboardProvider;
-(void)setDashboardProvider:(id<CPDashboardProviding>)arg1 ;
-(NSArray *)shortcutButtons;
-(void)setShortcutButtons:(NSArray *)arg1 ;
@end

