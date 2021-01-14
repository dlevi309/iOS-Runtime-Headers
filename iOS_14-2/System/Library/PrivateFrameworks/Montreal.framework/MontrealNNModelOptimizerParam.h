/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/

#import <Montreal/MontrealNNDescription.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSNumber, NSString;

@interface MontrealNNModelOptimizerParam : MontrealNNDescription <MontrealNNDescriptionProtocol> {

	float _learningRate;
	float _momentum;
	unsigned long long _optimizerType;
	NSNumber* _gradientClipMin;
	NSNumber* _gradientClipMax;

}

@property (readonly) unsigned long long optimizerType;              //@synthesize optimizerType=_optimizerType - In the implementation block
@property (readonly) float learningRate;                            //@synthesize learningRate=_learningRate - In the implementation block
@property (readonly) float momentum;                                //@synthesize momentum=_momentum - In the implementation block
@property (readonly) NSNumber * gradientClipMin;                    //@synthesize gradientClipMin=_gradientClipMin - In the implementation block
@property (readonly) NSNumber * gradientClipMax;                    //@synthesize gradientClipMax=_gradientClipMax - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)optimizerType;
-(id)initWithDictionary:(id)arg1 ;
-(float)momentum;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)gradientClipMin;
-(NSNumber *)gradientClipMax;
-(id)initWithOptimizerType:(unsigned long long)arg1 learningRate:(float)arg2 momentum:(float)arg3 gradientClipMin:(id)arg4 gradientClipMax:(id)arg5 ;
-(float)learningRate;
@end

