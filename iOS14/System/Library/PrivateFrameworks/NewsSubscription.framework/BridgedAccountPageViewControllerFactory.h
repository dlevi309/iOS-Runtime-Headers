/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)createAccountPageViewControllerFor:(id)arg1 ;
@end

