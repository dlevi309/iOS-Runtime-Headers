/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(void)stopAnimatingForIdentifier:(id)arg1 ;
-(void)startAnimatingInNavItem:(id)arg1 title:(id)arg2 forIdentifier:(id)arg3 hideBackButton:(BOOL)arg4 hideLeftItems:(BOOL)arg5 ;
@end

