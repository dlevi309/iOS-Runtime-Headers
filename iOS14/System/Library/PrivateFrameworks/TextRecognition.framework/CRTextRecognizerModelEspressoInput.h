/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/CRTextRecognizerModelInput.h>

@class NSArray, NSString;

@interface CRTextRecognizerModelEspressoInput : NSObject <CRTextRecognizerModelInput> {

	NSArray* _textFeatureInfo;
	unsigned long long _batchSize;
	vImage_Buffer* _img_input;

}

@property (assign,nonatomic) vImage_Buffer* img_input;              //@synthesize img_input=_img_input - In the implementation block
@property (assign) unsigned long long batchSize;                    //@synthesize batchSize=_batchSize - In the implementation block
@property (retain) NSArray * textFeatureInfo;                       //@synthesize textFeatureInfo=_textFeatureInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(void)dealloc;
-(NSArray *)textFeatureInfo;
-(void)setTextFeatureInfo:(NSArray *)arg1 ;
-(vImage_Buffer*)img_input;
-(void)setImg_input:(vImage_Buffer*)arg1 ;
-(id)initWithImg_input:(vImage_Buffer*)arg1 batchSize:(unsigned long long)arg2 featureInfo:(id)arg3 ;
@end

