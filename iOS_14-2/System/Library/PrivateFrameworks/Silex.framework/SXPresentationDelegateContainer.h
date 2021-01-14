/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,__weak,readonly) id<SXPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXPresentationDelegate>)presentationDelegate;
-(void)registerPresentationDelegate:(id)arg1 ;
@end

