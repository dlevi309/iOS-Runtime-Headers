/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@protocol AXMActiveSoundOutputActionHandleProvider <NSObject>
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@required
-(void)stop;
-(float)pitch;
-(void)setPitch:(float)arg1;
-(void)setRate:(float)arg1;
-(float)rate;
-(void)setQuantizedRate:(long long)arg1;

@end

