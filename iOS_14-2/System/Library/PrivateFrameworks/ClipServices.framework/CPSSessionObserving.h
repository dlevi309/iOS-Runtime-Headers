/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@protocol CPSSessionObserving <NSObject>
@optional
-(void)didDetermineAvailability:(BOOL)arg1 options:(id)arg2;
-(void)didUpdateMetadata:(id)arg1;
-(void)didFinishLoadingWithError:(id)arg1;
-(void)didUpdateInstallProgress:(id)arg1;
-(void)didInstallApplicationPlaceholder;
-(void)didRetrieveApplicationIcon:(id)arg1;
-(void)didRetrieveHeroImage:(id)arg1;
-(void)didFinishTestingAtTime:(double)arg1;
-(void)didRetrieveBusinessIcon:(id)arg1;

@end

