/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMIDESTrainingResult : HMFObject {

	NSArray* _layerParameters;
	NSArray* _losses;

}

@property (readonly) NSArray * layerParameters;              //@synthesize layerParameters=_layerParameters - In the implementation block
@property (readonly) NSArray * losses;                       //@synthesize losses=_losses - In the implementation block
-(NSArray *)losses;
-(NSArray *)layerParameters;
-(id)initWithLayerParameters:(id)arg1 losses:(id)arg2 ;
@end

