/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithData:(CVBufferRef)arg1 ;
-(void)setData:(CVBufferRef)arg1 ;
-(CVBufferRef)data;
@end

