/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/


@class NSMutableDictionary;

@interface RUINavBarSpinnerManager : NSObject {

	NSMutableDictionary* _savedRecords;
	long long _activityIndicatorViewStyle;

}

@property (assign,nonatomic) long long activityIndicatorViewStyle;              //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
+(id)sharedSpinnerManager;
-(id)init;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(long long)activityIndicatorViewStyle;
-(void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 ;
-(void)stopAnimatingForIdentifier:(id)arg1 ;
-(void)startAnimatingInNavItem:(id)arg1 title:(id)arg2 forIdentifier:(id)arg3 hideBackButton:(BOOL)arg4 ;
@end

