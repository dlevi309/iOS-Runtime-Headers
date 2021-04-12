/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CDPHostInterface.h>

@protocol NSCopying;
@class NSExtension;

@interface _CDPHostViewController : _UIRemoteViewController <CDPHostInterface> {

	id<NSCopying> _request;
	NSExtension* _weakExtension;
	/*^block*/id _viewServiceTerminationBlock;

}

@property (nonatomic,retain) id<NSCopying> request;                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) NSExtension * weakExtension;              //@synthesize weakExtension=_weakExtension - In the implementation block
@property (nonatomic,copy) id viewServiceTerminationBlock;                    //@synthesize viewServiceTerminationBlock=_viewServiceTerminationBlock - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)setRequest:(id<NSCopying>)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id<NSCopying>)request;
-(double)_keyboardHeightOffset;
-(void)dealloc;
-(void)setViewServiceTerminationBlock:(id)arg1 ;
-(id)viewServiceTerminationBlock;
-(NSExtension *)weakExtension;
-(void)setWeakExtension:(NSExtension *)arg1 ;
-(void)hostKeyboardOffset:(/*^block*/id)arg1 ;
@end

