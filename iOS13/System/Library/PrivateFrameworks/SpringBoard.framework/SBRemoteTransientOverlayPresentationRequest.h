/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBTransientOverlayViewController, SBSRemoteAlertPresentationTarget;

@interface SBRemoteTransientOverlayPresentationRequest : NSObject <NSCopying> {

	BOOL _animated;
	BOOL _isScreenshotMarkup;
	BOOL _shouldDismissSiri;
	SBTransientOverlayViewController* _viewController;
	SBSRemoteAlertPresentationTarget* _presentationTarget;

}

@property (nonatomic,readonly) SBTransientOverlayViewController * viewController;                //@synthesize viewController=_viewController - In the implementation block
@property (assign,getter=isAnimated,nonatomic) BOOL animated;                                    //@synthesize animated=_animated - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertPresentationTarget * presentationTarget;              //@synthesize presentationTarget=_presentationTarget - In the implementation block
@property (assign,nonatomic) BOOL isScreenshotMarkup;                                            //@synthesize isScreenshotMarkup=_isScreenshotMarkup - In the implementation block
@property (assign,nonatomic) BOOL shouldDismissSiri;                                             //@synthesize shouldDismissSiri=_shouldDismissSiri - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBTransientOverlayViewController *)viewController;
-(BOOL)isAnimated;
-(id)initWithViewController:(id)arg1 ;
-(void)setAnimated:(BOOL)arg1 ;
-(SBSRemoteAlertPresentationTarget *)presentationTarget;
-(void)setPresentationTarget:(SBSRemoteAlertPresentationTarget *)arg1 ;
-(void)setShouldDismissSiri:(BOOL)arg1 ;
-(BOOL)shouldDismissSiri;
-(BOOL)isScreenshotMarkup;
-(void)setIsScreenshotMarkup:(BOOL)arg1 ;
@end

