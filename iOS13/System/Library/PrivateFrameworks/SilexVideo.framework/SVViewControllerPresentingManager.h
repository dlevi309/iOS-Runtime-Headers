/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVViewControllerPresenting.h>

@protocol SVModalPresentationViewControllerProviding;
@class NSString;

@interface SVViewControllerPresentingManager : NSObject <SVViewControllerPresenting> {

	id<SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;

}

@property (nonatomic,readonly) id<SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider;              //@synthesize modalPresentationViewControllerProvider=_modalPresentationViewControllerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVModalPresentationViewControllerProviding>)modalPresentationViewControllerProvider;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 ;
-(id)initWithModalPresentationViewControllerProvider:(id)arg1 ;
@end

