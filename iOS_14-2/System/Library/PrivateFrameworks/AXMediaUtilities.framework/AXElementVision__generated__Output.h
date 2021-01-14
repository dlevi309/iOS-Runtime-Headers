/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface AXElementVision__generated__Output : NSObject <MLFeatureProvider> {

	MLMultiArray* _confidence;
	MLMultiArray* _coordinates;

}

@property (nonatomic,retain) MLMultiArray * confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) MLMultiArray * coordinates;              //@synthesize coordinates=_coordinates - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(MLMultiArray *)confidence;
-(NSSet *)featureNames;
-(MLMultiArray *)coordinates;
-(id)initWithConfidence:(id)arg1 coordinates:(id)arg2 ;
-(void)setCoordinates:(MLMultiArray *)arg1 ;
-(void)setConfidence:(MLMultiArray *)arg1 ;
@end

