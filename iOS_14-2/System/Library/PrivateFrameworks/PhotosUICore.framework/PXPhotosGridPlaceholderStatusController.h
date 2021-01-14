/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, PXStatusView, PXCPLUIStatusProvider, PXCPLStatusController;

@interface PXPhotosGridPlaceholderStatusController : NSObject {

	BOOL _presentCPLStatus;
	NSString* _fallbackTitle;
	NSString* _fallbackMessage;
	PXStatusView* _statusView;
	PXCPLUIStatusProvider* _cplUIStatusProvider;
	PXCPLStatusController* _statusController;

}

@property (nonatomic,readonly) PXStatusView * statusView; 
-(void)_systemPhotoLibraryDidChange;
-(id)_createCPLUIStatusProvider;
-(void)setCplUIStatusProvider:(id)arg1 ;
-(PXStatusView *)statusView;
-(id)init;
-(id)initForPresentingCPLStatus:(BOOL)arg1 fallbackTitle:(id)arg2 fallbackMessage:(id)arg3 ;
-(void)_refreshCPLUIStatusProvider;
@end

