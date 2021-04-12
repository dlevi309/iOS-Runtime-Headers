/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol GEOMotionContextProvider <NSObject>
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate; 
@required
-(void)stopMotionUpdates;
-(void)setMotionDelegate:(id)arg1;
-(void)startMotionUpdates;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;

@end

