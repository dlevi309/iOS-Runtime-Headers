/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <ITMLKit/IKJSApplication.h>
#import <libobjc.A.dylib/SKUIJSApplication.h>

@protocol SKUIJSApplication <JSExport>
@property (nonatomic,readonly) BOOL pageRenderMetricsEnabled; 
@property (readonly) BOOL isRunningTests; 
@required
-(BOOL)isRunningTests;
-(BOOL)pageRenderMetricsEnabled;
-(void)launchFailed;
-(void)launchComplete:(id)arg1;
-(void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3;

@end


@class SKUIApplicationController;

@interface SKUIJSApplication : IKJSApplication <SKUIJSApplication> {

	SKUIApplicationController* _applicationController;

}

@property (nonatomic,__weak,readonly) SKUIApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,readonly) BOOL pageRenderMetricsEnabled; 
@property (readonly) BOOL isRunningTests; 
-(BOOL)isRunningTests;
-(SKUIApplicationController *)applicationController;
-(BOOL)pageRenderMetricsEnabled;
-(void)launchFailed;
-(void)launchComplete:(id)arg1 ;
-(void)sendDocumentMessage:(id)arg1 :(id)arg2 :(id)arg3 ;
-(id)initWithAppContext:(id)arg1 applicationController:(id)arg2 ;
@end

