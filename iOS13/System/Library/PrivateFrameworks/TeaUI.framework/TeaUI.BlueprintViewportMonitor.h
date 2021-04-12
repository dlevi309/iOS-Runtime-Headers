/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <libobjc.A.dylib/TUMotionManagerObserver.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@interface TeaUI.BlueprintViewportMonitor : NSObject <TUMotionManagerObserver, UICollectionViewDelegate, UITableViewDelegate> {

	 observers;
	 options;

}
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)init;
@end

