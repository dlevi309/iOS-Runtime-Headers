/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/CRTextRecognizerModelInput.h>

@class NSArray, MLMultiArray, NSSet, NSString;

@interface CRTextSequenceRecognizerModelCoreMLInput : NSObject <MLFeatureProvider, CRTextRecognizerModelInput> {

	MLMultiArray* _img_input;
	NSArray* _textFeatureInfo;

}

@property (nonatomic,retain) MLMultiArray * img_input;              //@synthesize img_input=_img_input - In the implementation block
@property (retain) NSArray * textFeatureInfo;                       //@synthesize textFeatureInfo=_textFeatureInfo - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSArray *)textFeatureInfo;
-(void)setTextFeatureInfo:(NSArray *)arg1 ;
-(id)initWithImg_input:(id)arg1 featureInfo:(id)arg2 ;
-(MLMultiArray *)img_input;
-(void)setImg_input:(MLMultiArray *)arg1 ;
@end

