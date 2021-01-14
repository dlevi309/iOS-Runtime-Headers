/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBTransientOverlayViewController;

@interface SBRemoteTransientOverlayDismissalRequest : NSObject {

	BOOL _animated;
	BOOL _shouldInvalidatePresentation;
	/*^block*/id _completionHandler;
	SBTransientOverlayViewController* _viewController;

}

@property (assign,getter=isAnimated,nonatomic) BOOL animated;                                  //@synthesize animated=_animated - In the implementation block
@property (nonatomic,copy) id completionHandler;                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldInvalidatePresentation;                                //@synthesize shouldInvalidatePresentation=_shouldInvalidatePresentation - In the implementation block
@property (nonatomic,readonly) SBTransientOverlayViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(id)completionHandler;
-(SBTransientOverlayViewController *)viewController;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)shouldInvalidatePresentation;
-(void)setShouldInvalidatePresentation:(BOOL)arg1 ;
@end

