/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WidgetKit.framework/WidgetKit
*/

#import <WidgetKit/WidgetKit._AvocadoExtensionBaseContext.h>
#import <WidgetKit/WidgetKit.HostToExtensionXPCInterface.h>

@interface WidgetKit.WidgetExtensionContext : WidgetKit._AvocadoExtensionBaseContext <WidgetKit.HostToExtensionXPCInterface> {

	 previewAgent;
	 urlHandlers;

}
-(id)init;
-(id)initWithInputItems:(id)arg1 contextUUID:(id)arg2 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)initWithInputItems:(id)arg1 ;
-(void)invalidate;
-(void)performCleanup;
-(void)getDescriptorsWithCompletion:(/*^block*/id)arg1 ;
-(void)getPlaceholdersWithEnvironment:(id)arg1 for:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleURLSessionEventsFor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)attachPreviewAgentWithFrameworkPath:(id)arg1 endpoint:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getTimelineFor:(id)arg1 into:(id)arg2 environment:(id)arg3 isPreview:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
@end

