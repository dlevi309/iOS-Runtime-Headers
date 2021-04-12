/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
*/

#import <libobjc.A.dylib/_NCWidgetController_Service_IPC.h>

@class NSXPCConnection;

@interface NCWidgetController : NSObject <_NCWidgetController_Service_IPC> {

	NCWidgetController* _strongReference;
	NSXPCConnection* _connection;

}

@property (setter=_setStrongReference:,getter=_strongReference,nonatomic,retain) NCWidgetController * strongReference;              //@synthesize strongReference=_strongReference - In the implementation block
@property (setter=_setConnection:,getter=_connection,nonatomic,retain) NSXPCConnection * connection;                                //@synthesize connection=_connection - In the implementation block
+(id)widgetController;
+(id)widgetContentUnavailableViewWithTitle:(id)arg1 ;
+(id)widgetContentUnavailableViewWithButtonTitle:(id)arg1 buttonAction:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)_connection;
-(void)_setConnection:(id)arg1 ;
-(void)_invalidateConnection;
-(void)_setStrongReference:(id)arg1 ;
-(void)__didReceiveHasContentRequest;
-(id)_connectionForRequest;
-(void)setHasContent:(BOOL)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(void)requestRefreshAfterDate:(id)arg1 forWidgetWithBundleIdentifier:(id)arg2 ;
-(id)_strongReference;
@end

