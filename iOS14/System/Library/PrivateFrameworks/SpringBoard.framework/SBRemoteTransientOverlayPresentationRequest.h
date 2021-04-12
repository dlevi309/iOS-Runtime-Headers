/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAnimated;
-(void)setAnimated:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(SBTransientOverlayViewController *)viewController;
-(SBSRemoteAlertPresentationTarget *)presentationTarget;
-(void)setPresentationTarget:(SBSRemoteAlertPresentationTarget *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldDismissSiri:(BOOL)arg1 ;
-(BOOL)shouldDismissSiri;
-(BOOL)isScreenshotMarkup;
-(void)setIsScreenshotMarkup:(BOOL)arg1 ;
@end

