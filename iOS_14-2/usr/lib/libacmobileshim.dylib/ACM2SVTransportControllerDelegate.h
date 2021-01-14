/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACM2SVTransportControllerDelegate <NSObject>
@optional
-(void)twoSVTransportController:(id)arg1 fetchImageWithHandler:(id)arg2 completion:(/*^block*/id)arg3;
-(void)twoSVTransportControllerCancelFetchingImages:(id)arg1;

@required
-(void)twoSVTransportController:(id)arg1 scheduleHandler:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end

