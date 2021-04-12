/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXPresentationDelegateContainer.h>

@protocol SXPresentationDelegateContainer <SXPresentationDelegateProvider>
@required
-(void)registerPresentationDelegate:(id)arg1;

@end


@protocol SXPresentationDelegate;
@class NSString;

@interface SXPresentationDelegateContainer : NSObject <SXPresentationDelegateContainer> {

	id<SXPresentationDelegate> _presentationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<SXPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
-(id<SXPresentationDelegate>)presentationDelegate;
-(void)registerPresentationDelegate:(id)arg1 ;
@end

