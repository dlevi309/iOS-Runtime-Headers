/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
*/

#import <libobjc.A.dylib/SKAccountPageViewControllerDelegate.h>

@protocol SKAccountPageViewControllerDelegate;
@class NSString;

@interface BridgedAccountPageViewControllerFactory : NSObject <SKAccountPageViewControllerDelegate> {

	id<SKAccountPageViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKAccountPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKAccountPageViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKAccountPageViewControllerDelegate>)arg1 ;
-(id)createAccountPageViewControllerFor:(id)arg1 useAMS:(BOOL)arg2 ;
@end

