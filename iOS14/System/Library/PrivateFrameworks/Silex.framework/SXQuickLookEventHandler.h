/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXQuickLookInteractorDelegate.h>
#import <libobjc.A.dylib/SXQuickLookEventHandler.h>

@protocol SXQuickLookEventHandler <NSObject>
@required
-(void)requestThumbnailWithSize:(CGSize)arg1;
-(void)didTapThumbnailView:(id)arg1;

@end


@protocol SXQuickLookEventHandlerDelegate, SXQuickLookInteractor, SXQuickLookRouter;
@class NSString;

@interface SXQuickLookEventHandler : NSObject <SXQuickLookInteractorDelegate, SXQuickLookEventHandler> {

	id<SXQuickLookEventHandlerDelegate> delegate;
	id<SXQuickLookInteractor> _interactor;
	id<SXQuickLookRouter> _router;

}

@property (nonatomic,readonly) id<SXQuickLookInteractor> interactor;                           //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,readonly) id<SXQuickLookRouter> router;                                   //@synthesize router=_router - In the implementation block
@property (assign,nonatomic,__weak) id<SXQuickLookEventHandlerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXQuickLookEventHandlerDelegate>)delegate;
-(id<SXQuickLookRouter>)router;
-(void)setDelegate:(id<SXQuickLookEventHandlerDelegate>)arg1 ;
-(id<SXQuickLookInteractor>)interactor;
-(void)didLoadThumbnail:(id)arg1 ;
-(void)failedToLoadThumbnail;
-(void)requestThumbnailWithSize:(CGSize)arg1 ;
-(void)didTapThumbnailView:(id)arg1 ;
-(id)initWithInteractor:(id)arg1 router:(id)arg2 ;
@end

