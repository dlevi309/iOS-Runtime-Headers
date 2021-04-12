/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@interface MLInternalSettings : NSObject {

	BOOL _restrictNeuralNetworksToUseCPUOnly;
	BOOL _restrictNeuralNetworksFromUsingANE;
	BOOL _isNeuralNetworkGPUPathForbidden;

}

@property (assign) BOOL restrictNeuralNetworksToUseCPUOnly;                       //@synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly - In the implementation block
@property (assign) BOOL restrictNeuralNetworksFromUsingANE;                       //@synthesize restrictNeuralNetworksFromUsingANE=_restrictNeuralNetworksFromUsingANE - In the implementation block
@property (nonatomic,readonly) BOOL isNeuralNetworkGPUPathForbidden;              //@synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden - In the implementation block
+(id)globalSettings;
+(BOOL)deviceHasANE;
-(id)init;
-(BOOL)restrictNeuralNetworksToUseCPUOnly;
-(void)setRestrictNeuralNetworksToUseCPUOnly:(BOOL)arg1 ;
-(BOOL)restrictNeuralNetworksFromUsingANE;
-(void)setRestrictNeuralNetworksFromUsingANE:(BOOL)arg1 ;
-(BOOL)isNeuralNetworkGPUPathForbidden;
@end

