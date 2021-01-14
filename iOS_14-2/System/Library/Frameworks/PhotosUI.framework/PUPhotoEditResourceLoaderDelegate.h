/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PUPhotoEditResourceLoaderDelegate <NSObject>
@optional
-(void)photoEditResourceLoadRequestWillBeginDownload:(id)arg1;
-(void)photoEditResourceLoadRequestDidCompleteDownload:(id)arg1;
-(void)photoEditResourceLoadRequest:(id)arg1 downloadProgress:(double)arg2;
-(void)photoEditResourceLoadRequest:(id)arg1 mediaLoadDidFailWithError:(id)arg2;
-(void)photoEditResourceLoadRequestResourcesAvailabilityChanged:(id)arg1 previousAvailability:(long long)arg2 currentAvailability:(long long)arg3;

@required
-(void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2;

@end

