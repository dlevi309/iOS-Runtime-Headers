/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>
#import <libobjc.A.dylib/CRTextRecognizerModelOutput.h>

@class NSArray, MLMultiArray, NSSet, NSString;

@interface CRTextSequenceRecognizerModelCoreMLOutput : NSObject <MLFeatureProvider, CRTextRecognizerModelOutput> {

	NSArray* _textFeatureInfo;
	MLMultiArray* _output_label_prob_map;

}

@property (retain) NSArray * textFeatureInfo;                                   //@synthesize textFeatureInfo=_textFeatureInfo - In the implementation block
@property (nonatomic,retain) MLMultiArray * output_label_prob_map;              //@synthesize output_label_prob_map=_output_label_prob_map - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSArray *)textFeatureInfo;
-(void)setTextFeatureInfo:(NSArray *)arg1 ;
-(id)initWithOutput_label_prob_map:(id)arg1 ;
-(MLMultiArray *)output_label_prob_map;
-(void)setOutput_label_prob_map:(MLMultiArray *)arg1 ;
@end

