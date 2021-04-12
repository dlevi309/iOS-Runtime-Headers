/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
*/


@protocol OrganDonationObserverDelegate;
@interface OrganDonationObserver : NSObject {

	int _organDonationChangedToken;
	id<OrganDonationObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<OrganDonationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<OrganDonationObserverDelegate>)delegate;
-(void)setDelegate:(id<OrganDonationObserverDelegate>)arg1 ;
-(void)startObservingChanges;
-(void)dealloc;
@end

