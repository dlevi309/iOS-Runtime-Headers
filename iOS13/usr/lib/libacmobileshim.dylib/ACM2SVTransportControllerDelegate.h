/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACM2SVTransportControllerDelegate <NSObject>
@optional
-(void)twoSVTransportController:(id)arg1 fetchImageWithHandler:(id)arg2 completion:(/*^block*/id)arg3;
-(void)twoSVTransportControllerCancelFetchingImages:(id)arg1;

@required
-(void)twoSVTransportController:(id)arg1 scheduleHandler:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

