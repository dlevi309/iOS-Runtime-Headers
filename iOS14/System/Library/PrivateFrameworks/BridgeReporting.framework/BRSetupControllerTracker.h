/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgeReporting.framework/BridgeReporting
*/


@class NSMutableArray, BRSetupControllerDetails;

@interface BRSetupControllerTracker : NSObject {

	NSMutableArray* _setupControllers;
	BRSetupControllerDetails* _holdControllerDetails;

}

@property (nonatomic,retain) NSMutableArray * setupControllers;                             //@synthesize setupControllers=_setupControllers - In the implementation block
@property (nonatomic,retain) BRSetupControllerDetails * holdControllerDetails;              //@synthesize holdControllerDetails=_holdControllerDetails - In the implementation block
-(NSMutableArray *)setupControllers;
-(void)clearControllerHold;
-(void)setHoldControllerDetails:(BRSetupControllerDetails *)arg1 ;
-(void)setSetupControllers:(NSMutableArray *)arg1 ;
-(void)addSetupController:(id)arg1 action:(unsigned long long)arg2 ;
-(id)lastPushedSetupController;
-(BRSetupControllerDetails *)holdControllerDetails;
@end

