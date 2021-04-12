/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
*/

#import <AppleCVAPhoto/CVABackgroundRequestImplBase.h>
#import <libobjc.A.dylib/CVABackgroundRequest.h>

@class NSString;

@interface CVABackgroundRequestImplSDOF : CVABackgroundRequestImplBase <CVABackgroundRequest> {

	float _simulatedFocalRatio;
	float _sourceColorGain;
	float _sourceColorLux;

}

@property (assign) float simulatedFocalRatio;                       //@synthesize simulatedFocalRatio=_simulatedFocalRatio - In the implementation block
@property (assign) float sourceColorGain;                           //@synthesize sourceColorGain=_sourceColorGain - In the implementation block
@property (assign) float sourceColorLux;                            //@synthesize sourceColorLux=_sourceColorLux - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(float)simulatedFocalRatio;
-(float)sourceColorGain;
-(float)sourceColorLux;
-(void)setSimulatedFocalRatio:(float)arg1 ;
-(void)setSourceColorGain:(float)arg1 ;
-(void)setSourceColorLux:(float)arg1 ;
@end

