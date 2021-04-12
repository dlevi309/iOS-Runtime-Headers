/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@class PAEKeyerCbCrSetup, PAEKeyerLumaSetup;

@interface PAEKeyerSetupUtil : NSObject {

	PAEKeyerOMKeyer2D* _omKeyer;
	PAEKeyerCbCrSetup* _keyerCbCrSetup;
	PAEKeyerLumaSetup* _keyerLumaSetup;
	OMSamples* _omSamples;

}
-(BOOL)tight;
-(PAEKeyerOMKeyer2D*)omKeyer;
-(void)dealloc;
-(BOOL)autoScale;
-(id)initWithOMSamples:(OMSamples*)arg1 colorPrimaries:(int)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(double)shadowsGain;
-(double)highlightsGain;
-(double)spreadGain;
-(void)syncWithDB:(/*function pointer*/void**)arg1 setAsDefault:(BOOL)arg2 ;
-(void)syncChromaWithDB:(/*function pointer*/void**)arg1 ;
-(void)syncLumaWithDB:(/*function pointer*/void**)arg1 ;
-(void)removeKeyframeAtTime:(/*function pointer*/void**)arg1 forParam:(int)arg2 withAPI:(id)arg3 ;
-(void)removeKeyframeAtTime:(/*function pointer*/void**)arg1 ;
-(double)autoAdjustSoftGap;
-(double)simpleKeyAmount;
-(double)autoKeySoftness;
-(BOOL)addTolerance;
-(void)setAddTolerance:(BOOL)arg1 ;
-(BOOL)defineEdge;
-(void)setDefineEdge:(BOOL)arg1 ;
-(BOOL)keyerActiveAt:(/*function pointer*/void**)arg1 ;
@end

