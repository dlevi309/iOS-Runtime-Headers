/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUCameraImportItemCellDelegate <NSObject>
@required
-(void)handleTouchEvent:(long long)arg1 forCell:(id)arg2;
-(void)importCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
-(long long)contentFillModeForImportCell:(id)arg1;
-(long long)importCell:(id)arg1 requestImageForImportItem:(id)arg2 ofSize:(unsigned long long)arg3 completion:(/*^block*/id)arg4;

@end

