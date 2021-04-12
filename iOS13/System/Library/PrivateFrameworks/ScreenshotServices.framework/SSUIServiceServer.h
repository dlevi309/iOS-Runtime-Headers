/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol SSUIServiceServerDelegate;
@interface SSUIServiceServer : FBSServiceFacility {

	id<SSUIServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSUIServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SSUIServiceServerDelegate>)delegate;
-(void)setDelegate:(id<SSUIServiceServerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(BOOL)_handleHasAnySSUIServiceEntitlement:(id)arg1 ;
@end

