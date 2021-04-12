/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TUMotionManagerObserver.h>

@interface TeaUI.BlueprintViewportMonitor : NSObject <UICollectionViewDelegate, UITableViewDelegate, TUMotionManagerObserver> {

	 observers;
	 options;

}
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)init;
@end

