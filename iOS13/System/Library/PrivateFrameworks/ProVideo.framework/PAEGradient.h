/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEGradient : PAEGeneratorDefaultBase {

	int _currentMethod;

}
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)frameSetup:(SCD_Struct_PA79*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)initPAEGradientWithHeight:(id)arg1 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInfo:(SCD_Struct_PA79*)arg2 ;
@end

