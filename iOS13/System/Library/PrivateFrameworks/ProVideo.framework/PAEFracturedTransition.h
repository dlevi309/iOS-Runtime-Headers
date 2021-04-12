/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAETransitionDefaultBase.h>

@class NSLock;

@interface PAEFracturedTransition : PAETransitionDefaultBase {

	FracturedParams* _fxParams;
	vector<FracturedUtils::FracturedFXPoolItem *, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *> >* _fxPool;
	NSLock* _fxPoolLock;

}
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 inputInfoA:(SCD_Struct_PA80)arg2 inputInfoB:(SCD_Struct_PA80)arg3 timeFraction:(float)arg4 hardware:(BOOL*)arg5 software:(BOOL*)arg6 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_PA79*)arg5 ;
@end

