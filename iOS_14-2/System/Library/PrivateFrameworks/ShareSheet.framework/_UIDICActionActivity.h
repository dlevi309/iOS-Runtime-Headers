/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/UIActivity.h>

@class NSString;

@interface _UIDICActionActivity : UIActivity {

	NSString* _actionActivityType;
	NSString* _activityImageName;
	NSString* _localizedTitle;
	/*^block*/id _activityPerformingHandler;
	/*^block*/id _activityFinishedPerformingHandler;

}

@property (nonatomic,copy) id activityPerformingHandler;                      //@synthesize activityPerformingHandler=_activityPerformingHandler - In the implementation block
@property (nonatomic,copy) id activityFinishedPerformingHandler;              //@synthesize activityFinishedPerformingHandler=_activityFinishedPerformingHandler - In the implementation block
+(id)newPreviewActionActivity;
+(id)newLegacyDelegationActionActivityForPrint;
+(id)newLegacyDelegationActionActivityForCopy;
+(id)newLegacyDelegationActionActivityForSaveToCameraRoll;
+(long long)activityCategory;
-(void)_cleanup;
-(id)activityType;
-(void)performActivity;
-(id)initWithActivityType:(id)arg1 activityImageName:(id)arg2 localizedTitle:(id)arg3 ;
-(id)activityPerformingHandler;
-(void)setActivityPerformingHandler:(id)arg1 ;
-(id)activityFinishedPerformingHandler;
-(void)setActivityFinishedPerformingHandler:(id)arg1 ;
-(id)description;
-(id)_systemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
@end

