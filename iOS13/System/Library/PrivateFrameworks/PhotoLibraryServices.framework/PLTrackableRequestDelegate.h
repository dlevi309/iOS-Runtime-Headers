/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLTrackableRequestDelegate <NSObject>
@required
-(void)trackableRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4;
-(void)trackableResourceRepairRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
-(void)trackableDownloadRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
-(void)trackableVideoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;

@end

