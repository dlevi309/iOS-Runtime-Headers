/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class SBTransientOverlayViewController;

@interface SBTransientOverlayDismissalRequest : NSObject <NSCopying, NSMutableCopying> {

	BOOL _animated;
	/*^block*/id _completionHandler;
	long long _requestType;
	SBTransientOverlayViewController* _viewController;

}

@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                                //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) long long requestType;                                          //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) SBTransientOverlayViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(id)dismissalRequestForAllViewControllers;
+(id)dismissalRequestForViewController:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(long long)requestType;
-(id)completionHandler;
-(SBTransientOverlayViewController *)viewController;
-(BOOL)isAnimated;
-(id)_copyWithClass:(Class)arg1 ;
@end

