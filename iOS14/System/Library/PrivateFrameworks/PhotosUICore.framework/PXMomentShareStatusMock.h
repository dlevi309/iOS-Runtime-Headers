/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXMomentShareStatus.h>

@protocol PXDisplayMomentShare;
@class _PXMomentShareMockMomentShare;

@interface PXMomentShareStatusMock : PXMomentShareStatus {

	id<PXDisplayMomentShare> _originalMomentShare;
	_PXMomentShareMockMomentShare* _mockMomentShare;

}
+(BOOL)shouldUseMockStatus;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)owner;
-(id)initWithMomentShare:(id)arg1 ;
-(void)_updateStatus;
-(id)_actionManager;
-(void)dealloc;
@end

