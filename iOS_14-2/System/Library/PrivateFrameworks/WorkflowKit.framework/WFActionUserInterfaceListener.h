/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <VoiceShortcutClient/WFSingleConnectionXPCListener.h>
#import <libobjc.A.dylib/WFActionUserInterfaceDelegate.h>

@protocol WFActionUserInterfaceListenerDelegate;
@class WFActionUserInterface, NSString;

@interface WFActionUserInterfaceListener : WFSingleConnectionXPCListener <WFActionUserInterfaceDelegate> {

	id<WFActionUserInterfaceListenerDelegate> _delegate;
	WFActionUserInterface* _actionInterface;

}

@property (assign,nonatomic,__weak) id<WFActionUserInterfaceListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFActionUserInterface * actionInterface;                              //@synthesize actionInterface=_actionInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFActionUserInterfaceListenerDelegate>)delegate;
-(void)setDelegate:(id<WFActionUserInterfaceListenerDelegate>)arg1 ;
-(void)actionUserInterface:(id)arg1 showViewInPlatter:(id)arg2 attribution:(id)arg3 ;
-(id)initWithUserInterfaceHost:(id)arg1 actionClassName:(id)arg2 classNamesByType:(id)arg3 ;
-(id)initWithUserInterfaceHost:(id)arg1 actionClassName:(id)arg2 classNamesByType:(id)arg3 attribution:(id)arg4 ;
-(WFActionUserInterface *)actionInterface;
@end

