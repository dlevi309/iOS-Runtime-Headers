/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@class NSUserActivity, NSString;

@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate> {

	NSUserActivity* _activity;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)userActivityWasContinued:(id)arg1 ;
-(void)fireCompletionHandler;
-(void)startScan;
@end

