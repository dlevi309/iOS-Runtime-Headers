/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBWindowedAccessoryViewControllerDelegate.h>

@class SBWindow, SBWindowedAccessoryViewController, NSString;

@interface SBAccessoryController : NSObject <SBWindowedAccessoryViewControllerDelegate> {

	SBWindow* _window;
	SBWindowedAccessoryViewController* _windowedAccessoryViewController;

}

@property (nonatomic,retain) SBWindowedAccessoryViewController * windowedAccessoryViewController;                               //@synthesize windowedAccessoryViewController=_windowedAccessoryViewController - In the implementation block
@property (nonatomic,readonly) SBWindow * window;                                                                               //@synthesize window=_window - In the implementation block
@property (getter=isWindowedAccessoryWindowVisible,nonatomic,readonly) BOOL windowedAccessoryWindowVisiblevisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(SBWindow *)window;
-(void)showWindowedAccessoryWindow:(BOOL)arg1 ;
-(void)windowedAccessoryViewControllerForceDetachButtonTapped:(id)arg1 ;
-(void)_showWindowedAccessoryWindow:(BOOL)arg1 ;
-(BOOL)isWindowedAccessoryWindowVisible;
-(SBWindowedAccessoryViewController *)windowedAccessoryViewController;
-(void)setWindowedAccessoryViewController:(SBWindowedAccessoryViewController *)arg1 ;
@end

