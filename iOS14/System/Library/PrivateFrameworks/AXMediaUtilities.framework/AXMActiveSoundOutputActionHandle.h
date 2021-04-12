/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(float)pitch;
-(void)setRate:(float)arg1 ;
-(void)stop;
-(float)rate;
-(id<AXMActiveSoundOutputActionHandleProvider>)handleProvider;
-(void)setQuantizedRate:(long long)arg1 ;
-(void)setHandleProvider:(id<AXMActiveSoundOutputActionHandleProvider>)arg1 ;
-(void)setPitch:(float)arg1 ;
@end

