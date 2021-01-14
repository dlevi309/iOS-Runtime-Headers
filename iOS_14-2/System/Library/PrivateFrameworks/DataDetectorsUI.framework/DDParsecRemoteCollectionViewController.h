/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DDParsecHostVCInterface.h>

@protocol DDParsecHostVCInterface;
@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {

	BOOL _receivedInteractionDidFinish;
	id<DDParsecHostVCInterface> _hostSideDelegate;

}

@property (__weak) id<DDParsecHostVCInterface> hostSideDelegate;              //@synthesize hostSideDelegate=_hostSideDelegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)interactionEnded;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)_canShowWhileLocked;
-(void)interactionEndedWithPunchout:(BOOL)arg1 ;
-(void)showingErrorView:(BOOL)arg1 ;
-(void)showingFTE:(BOOL)arg1 ;
-(void)openParsecURL:(id)arg1 ;
-(void)getStatusBarHidden:(/*^block*/id)arg1 ;
-(void)openTrailerPunchout:(id)arg1 ;
-(id<DDParsecHostVCInterface>)hostSideDelegate;
-(void)setHostSideDelegate:(id<DDParsecHostVCInterface>)arg1 ;
@end

