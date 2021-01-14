/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACC2SVControllerDelegate <NSObject>
@optional
-(id)twoSVController:(id)arg1 myAppleConnectURLForRealm:(id)arg2;

@required
-(void)twoSVControllerWillClose:(id)arg1;
-(void)twoSVControllerEnterCredentials:(id)arg1;
-(void)twoSVController:(id)arg1 prepareUIWithCompletion:(/*^block*/id)arg2;
-(void)twoSVController:(id)arg1 openMyAppleConnectForRealm:(id)arg2;

@end

