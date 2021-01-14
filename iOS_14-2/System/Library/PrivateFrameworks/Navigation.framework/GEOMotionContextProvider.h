/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

