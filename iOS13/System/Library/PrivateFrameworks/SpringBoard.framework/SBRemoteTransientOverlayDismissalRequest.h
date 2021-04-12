/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(SBTransientOverlayViewController *)viewController;
-(BOOL)isAnimated;
-(id)initWithViewController:(id)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(BOOL)shouldInvalidatePresentation;
-(void)setShouldInvalidatePresentation:(BOOL)arg1 ;
@end

