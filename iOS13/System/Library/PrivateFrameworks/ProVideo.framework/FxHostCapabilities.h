/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


#import <ProVideo/ProVideo-Structs.h>
@interface FxHostCapabilities : NSObject {

	FxHostCapabilitiesPriv* _hostCapPriv;

}
+(void)setRemoteHostCapabilities:(id)arg1 ;
+(id)getRemoteHostCapabilities;
-(void)dealloc;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)upscalesFields;
-(BOOL)hostIsMotion;
-(BOOL)hostIsFCE;
-(BOOL)hostIsFCP;
-(unsigned)hostVersionNumber;
-(id)hostID;
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

