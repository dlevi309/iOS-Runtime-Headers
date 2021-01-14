/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXFooterViewModel.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXCMMFooterViewModelActionDelegate;
@class PXMomentShareStatusPresentation, NSString;

@interface PXCMMFooterViewModel : PXFooterViewModel <PXChangeObserver> {

	PXMomentShareStatusPresentation* _momentShareStatusPresentation;
	id<PXCMMFooterViewModelActionDelegate> _actionDelegate;

}

@property (assign,nonatomic,__weak) id<PXCMMFooterViewModelActionDelegate> actionDelegate;              //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PXCMMFooterViewModelActionDelegate>)actionDelegate;
-(void)_updateAllProperties;
-(void)setActionDelegate:(id<PXCMMFooterViewModelActionDelegate>)arg1 ;
-(id)initWithMomentShareStatusPresentation:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

