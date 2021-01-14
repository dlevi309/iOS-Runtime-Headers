/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DDAction.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>

@class DDRemoteActionViewController, NSString;

@interface DDCreateEventAction : DDAction <EKEventEditViewDelegate> {

	DDRemoteActionViewController* viewController;

}

@property (nonatomic,retain) DDRemoteActionViewController * viewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)actionAvailableForEvent:(id)arg1 ;
-(id)localizedName;
-(void)setViewController:(DDRemoteActionViewController *)arg1 ;
-(id)icon;
-(DDRemoteActionViewController *)viewController;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(int)interactionType;
-(void)invalidate;
-(id)notificationTitle;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end

