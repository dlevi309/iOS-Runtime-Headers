/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <UIKitCore/UIWindow.h>

@class NSString, ICViewControllerManager;

@interface ICWindow : UIWindow {

	NSString* _windowIdentifier;
	ICViewControllerManager* _viewControllerManager;

}

@property (nonatomic,retain) NSString * windowIdentifier;                                  //@synthesize windowIdentifier=_windowIdentifier - In the implementation block
@property (nonatomic,retain) ICViewControllerManager * viewControllerManager;              //@synthesize viewControllerManager=_viewControllerManager - In the implementation block
-(NSString *)windowIdentifier;
-(id)initWithWindowScene:(id)arg1 ;
-(id)ic_viewControllerManager;
-(ICViewControllerManager *)viewControllerManager;
-(void)setWindowIdentifier:(NSString *)arg1 ;
-(void)setViewControllerManager:(ICViewControllerManager *)arg1 ;
@end

