/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SVMoreFromPublisherActionTitleProviding.h>
#import <libobjc.A.dylib/SVMoreFromPublisherLogoProviding.h>

@protocol NUVideoCallToActionURLProviding;
@class NSString;

@interface NUVideoViewControllerMoreFromManager : NSObject <SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding> {

	id<NUVideoCallToActionURLProviding> _callToActionURLProvider;

}

@property (nonatomic,readonly) id<NUVideoCallToActionURLProviding> callToActionURLProvider;              //@synthesize callToActionURLProvider=_callToActionURLProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)actionTitleForVideo:(id)arg1 ;
-(/*^block*/id)moreFromLogoForVideo:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id<NUVideoCallToActionURLProviding>)callToActionURLProvider;
-(id)initWithCallToActionURLProvider:(id)arg1 ;
-(id)_callToActionTitleForVideoItem:(id)arg1 ;
@end

