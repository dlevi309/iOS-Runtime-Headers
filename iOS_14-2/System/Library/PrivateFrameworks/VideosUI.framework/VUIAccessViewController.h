/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class NSString;

@interface VUIAccessViewController : UINavigationController <UIViewControllerTransitioningDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_grantAccessToChannelIDs:(id)arg1 isReconsent:(BOOL)arg2 ;
+(BOOL)_grantAccessToBundleIDs:(id)arg1 ;
+(void)optInUser;
+(BOOL)grantAccessToBundleIDs:(id)arg1 ;
+(id)eligibleBundleIDs;
+(void)resolveBundleIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithChannels:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

