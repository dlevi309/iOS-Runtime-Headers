/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {

	TLAlert* _alert;
	Aq _activeAcquisitionCount;

}
-(void)relinquish;
-(id)description;
-(void)acquire;
-(void)_acquire;
-(void)dealloc;
-(void)_relinquish;
-(id)initWithAlert:(id)arg1 ;
@end

