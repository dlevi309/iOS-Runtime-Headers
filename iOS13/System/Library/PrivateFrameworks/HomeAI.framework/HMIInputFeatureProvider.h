/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(CVBufferRef)pixelBuffer;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSString *)inputName;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 inputName:(id)arg2 ;
@end

