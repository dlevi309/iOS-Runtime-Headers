/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLInternalSettings : NSObject <NSSecureCoding> {

	BOOL _restrictNeuralNetworksToUseCPUOnly;
	BOOL _restrictNeuralNetworksFromUsingANE;
	BOOL _isNeuralNetworkGPUPathForbidden;

}

@property (assign) BOOL restrictNeuralNetworksToUseCPUOnly;                       //@synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly - In the implementation block
@property (assign) BOOL restrictNeuralNetworksFromUsingANE;                       //@synthesize restrictNeuralNetworksFromUsingANE=_restrictNeuralNetworksFromUsingANE - In the implementation block
@property (nonatomic,readonly) BOOL isNeuralNetworkGPUPathForbidden;              //@synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)globalSettingsFromSettings:(id)arg1 ;
+(BOOL)deviceHasANE;
+(id)globalSettings;
-(id)init;
-(BOOL)restrictNeuralNetworksToUseCPUOnly;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRestrictNeuralNetworksToUseCPUOnly:(BOOL)arg1 ;
-(BOOL)isNeuralNetworkGPUPathForbidden;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)restrictNeuralNetworksFromUsingANE;
-(void)setRestrictNeuralNetworksFromUsingANE:(BOOL)arg1 ;
@end

