/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {

	TLAlert* _alert;
	Aq _activeAcquisitionCount;

}
-(void)dealloc;
-(id)description;
-(void)acquire;
-(void)relinquish;
-(void)_acquire;
-(void)_relinquish;
-(id)initWithAlert:(id)arg1 ;
@end

