/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxHostCapabilities : NSObject {

	FxHostCapabilitiesPriv* _hostCapPriv;

}
+(void)setRemoteHostCapabilities:(id)arg1 ;
+(id)getRemoteHostCapabilities;
-(id)hostID;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)upscalesFields;
-(BOOL)hostIsMotion;
-(BOOL)hostIsFCE;
-(BOOL)hostIsFCP;
-(unsigned)hostVersionNumber;
-(BOOL)formatsFloatRGBABitmapsAsARGB;
-(BOOL)supportsHiddenParameters;
-(BOOL)supportsDisabledParameters;
-(BOOL)supportsGroupParameters;
-(BOOL)notifiesParameterChangedForGenerators;
-(BOOL)parameterChangedUsableForAllParameters;
-(BOOL)supportsTemporalBitmaps;
-(unsigned long long)timeBase;
-(id)glContextPixelFormatAttributes;
@end

