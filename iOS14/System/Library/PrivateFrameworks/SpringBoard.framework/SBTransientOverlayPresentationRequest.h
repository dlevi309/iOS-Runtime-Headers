/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class SBTransientOverlayViewController;

@interface SBTransientOverlayPresentationRequest : NSObject <NSCopying, NSMutableCopying> {

	BOOL _animated;
	/*^block*/id _completionHandler;
	BOOL _shouldDismissSiri;
	SBTransientOverlayViewController* _viewController;

}

@property (getter=isAnimated,nonatomic,readonly) BOOL animated;                                //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) BOOL shouldDismissSiri;                                         //@synthesize shouldDismissSiri=_shouldDismissSiri - In the implementation block
@property (nonatomic,readonly) SBTransientOverlayViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(BOOL)isAnimated;
-(id)initWithViewController:(id)arg1 ;
-(id)_copyWithClass:(Class)arg1 ;
-(id)completionHandler;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SBTransientOverlayViewController *)viewController;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldDismissSiri;
@end

