/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@class UINavigationController;

@interface DDFlightAction : DDAction {

	UINavigationController* _viewController;

}
-(id)localizedName;
-(id)icon;
-(id)viewController;
-(int)interactionType;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(void)closePressed;
-(void)prepareViewControllerForActionController:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
@end

