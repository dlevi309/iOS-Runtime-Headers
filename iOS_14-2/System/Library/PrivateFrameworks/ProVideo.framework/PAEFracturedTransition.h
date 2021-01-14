/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)properties;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)frameSetup:(SCD_Struct_PA84*)arg1 inputInfoA:(SCD_Struct_PA83)arg2 inputInfoB:(SCD_Struct_PA83)arg3 timeFraction:(float)arg4 hardware:(BOOL*)arg5 software:(BOOL*)arg6 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_PA84*)arg5 ;
@end

