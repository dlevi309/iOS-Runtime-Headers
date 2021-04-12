/*
* Generated on Monday, March 1, 2021 at 2:35:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface CRTextRecognizerModelInput : NSObject <MLFeatureProvider> {

	MLMultiArray* _img_input;

}

@property (nonatomic,retain) MLMultiArray * img_input;              //@synthesize img_input=_img_input - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithImg_input:(id)arg1 ;
-(MLMultiArray *)img_input;
-(void)setImg_input:(MLMultiArray *)arg1 ;
@end

