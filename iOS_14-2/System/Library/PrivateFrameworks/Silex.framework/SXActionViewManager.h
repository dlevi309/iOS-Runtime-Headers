/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXActionViewManager.h>

@protocol SXActionViewManager <NSObject>
@required
-(void)presentActivityGroup:(id)arg1 action:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 completion:(/*^block*/id)arg5;

@end


@protocol SXViewControllerPresenting;
@class NSString;

@interface SXActionViewManager : NSObject <SXActionViewManager> {

	id<SXViewControllerPresenting> _viewControllerPresenter;

}

@property (nonatomic,readonly) id<SXViewControllerPresenting> viewControllerPresenter;              //@synthesize viewControllerPresenter=_viewControllerPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentActivityGroup:(id)arg1 action:(id)arg2 sourceView:(id)arg3 sourceRect:(CGRect)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithViewControllerPresenting:(id)arg1 ;
-(id<SXViewControllerPresenting>)viewControllerPresenter;
@end

