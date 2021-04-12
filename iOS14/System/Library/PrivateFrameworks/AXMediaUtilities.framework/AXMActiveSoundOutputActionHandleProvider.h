/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@protocol AXMActiveSoundOutputActionHandleProvider <NSObject>
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float pitch; 
@required
-(float)pitch;
-(void)setRate:(float)arg1;
-(void)stop;
-(float)rate;
-(void)setQuantizedRate:(long long)arg1;
-(void)setPitch:(float)arg1;

@end

