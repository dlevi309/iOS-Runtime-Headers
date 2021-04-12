/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXMomentShareStatusPresentation, PXStatusViewModel, NSString;

@interface PXCMMStatusController : NSObject <PXChangeObserver> {

	PXMomentShareStatusPresentation* _statusPresentation;
	PXStatusViewModel* _viewModel;

}

@property (nonatomic,readonly) PXStatusViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(PXStatusViewModel *)viewModel;
-(id)initWithStatusPresentation:(id)arg1 viewModel:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_updateWithChangeDescriptor:(unsigned long long)arg1 ;
@end

