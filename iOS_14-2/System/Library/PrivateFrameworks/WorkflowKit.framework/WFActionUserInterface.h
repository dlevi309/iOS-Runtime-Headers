/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFRemoteUserInterface.h>

@protocol WFUserInterfaceHost, WFActionUserInterfaceDelegate;
@class WFDialogAttribution, NSString;

@interface WFActionUserInterface : NSObject <WFRemoteUserInterface> {

	id<WFUserInterfaceHost> _userInterfaceHost;
	id<WFActionUserInterfaceDelegate> _delegate;
	WFDialogAttribution* _attribution;

}

@property (nonatomic,readonly) id<WFUserInterfaceHost> userInterfaceHost;                    //@synthesize userInterfaceHost=_userInterfaceHost - In the implementation block
@property (assign,nonatomic,__weak) id<WFActionUserInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDialogAttribution * attribution;                            //@synthesize attribution=_attribution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionUserInterfaceDelegate>)delegate;
-(void)setDelegate:(id<WFActionUserInterfaceDelegate>)arg1 ;
-(WFDialogAttribution *)attribution;
-(id)viewController;
-(id)userInterfaceType;
-(id)initWithUserInterfaceHost:(id)arg1 ;
-(id)initWithUserInterfaceHost:(id)arg1 attribution:(id)arg2 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id<WFUserInterfaceHost>)userInterfaceHost;
@end

