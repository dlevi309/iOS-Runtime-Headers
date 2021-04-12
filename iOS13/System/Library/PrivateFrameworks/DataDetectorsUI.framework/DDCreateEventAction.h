/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)cachedEventForICSString:(id)arg1 ;
+(BOOL)actionAvailableForEvent:(id)arg1 ;
-(void)invalidate;
-(id)localizedName;
-(int)interactionType;
-(void)setViewController:(DDRemoteActionViewController *)arg1 ;
-(id)icon;
-(DDRemoteActionViewController *)viewController;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(id)notificationTitle;
-(id)notificationIconBundleIdentifier;
-(id)notificationURL;
@end

