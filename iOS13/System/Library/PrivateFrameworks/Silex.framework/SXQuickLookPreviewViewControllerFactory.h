/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXQuickLookPreviewViewControllerFactory.h>

@protocol SXQuickLookPreviewViewControllerFactory <NSObject>
@required
-(id)viewControllerForFile:(id)arg1 transitionContext:(id)arg2;

@end


@protocol SXMediaSharingPolicyProvider;
@class NSString;

@interface SXQuickLookPreviewViewControllerFactory : NSObject <SXQuickLookPreviewViewControllerFactory> {

	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;

}

@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;              //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(id)viewControllerForFile:(id)arg1 transitionContext:(id)arg2 ;
-(id)initWithMediaSharingPolicyProvider:(id)arg1 ;
@end

