/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/ScreenTime
*/

#import <ScreenTime/ScreenTime-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/STWebServiceDelegate.h>

@class NSString;

@interface STWebRemoteViewController : _UIRemoteViewController <STWebServiceDelegate> {

	BOOL _URLIsBlocked;

}

@property (assign) BOOL URLIsBlocked;                               //@synthesize URLIsBlocked=_URLIsBlocked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(void)instantiateWebViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)setURLIsBlocked:(BOOL)arg1 ;
-(BOOL)URLIsBlocked;
-(void)setURLIsBlocked:(BOOL)arg1 replyHandler:(/*^block*/id)arg2 ;
@end

