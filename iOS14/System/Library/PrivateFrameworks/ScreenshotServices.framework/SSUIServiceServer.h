/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <FrontBoardServices/FBSServiceFacility.h>

@protocol SSUIServiceServerDelegate;
@interface SSUIServiceServer : FBSServiceFacility {

	id<SSUIServiceServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSUIServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SSUIServiceServerDelegate>)delegate;
-(BOOL)_handleHasAnySSUIServiceEntitlement:(id)arg1 ;
-(void)setDelegate:(id<SSUIServiceServerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end

