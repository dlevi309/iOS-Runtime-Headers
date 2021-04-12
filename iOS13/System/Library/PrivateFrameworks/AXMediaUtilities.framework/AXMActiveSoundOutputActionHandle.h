/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMOutputActionHandle.h>

@protocol AXMActiveSoundOutputActionHandleProvider;
@interface AXMActiveSoundOutputActionHandle : AXMOutputActionHandle {

	id<AXMActiveSoundOutputActionHandleProvider> _handleProvider;

}

@property (nonatomic,retain) id<AXMActiveSoundOutputActionHandleProvider> handleProvider;              //@synthesize handleProvider=_handleProvider - In the implementation block
@property (assign,nonatomic) float pitch; 
@property (assign,nonatomic) float rate; 
-(void)stop;
-(float)pitch;
-(void)setPitch:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(id<AXMActiveSoundOutputActionHandleProvider>)handleProvider;
-(void)setQuantizedRate:(long long)arg1 ;
-(void)setHandleProvider:(id<AXMActiveSoundOutputActionHandleProvider>)arg1 ;
@end

