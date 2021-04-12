/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface CRTextDetectorModelInput : NSObject <MLFeatureProvider> {

	CVBufferRef _data;

}

@property (assign,nonatomic) CVBufferRef data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)initWithData:(CVBufferRef)arg1 ;
-(CVBufferRef)data;
-(void)setData:(CVBufferRef)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
@end

