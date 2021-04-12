/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet, NSString;

@interface HMIInputFeatureProvider : NSObject <MLFeatureProvider> {

	CVBufferRef _pixelBuffer;
	NSString* _inputName;

}

@property (readonly) CVBufferRef pixelBuffer;                     //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) NSString * inputName;                        //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSString *)inputName;
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 inputName:(id)arg2 ;
@end

