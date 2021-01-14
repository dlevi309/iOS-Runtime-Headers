/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@protocol MLFeatureProvider;
@class NSSet, NSString, VNSceneprint;

@interface VNMLFeatureProvider : NSObject <MLFeatureProvider> {

	NSString* _imageInputKey;
	CVBufferRef _buffer;
	VNSceneprint* _scenePrint;
	long long* _scenePrintMLMultiArrayDataType;
	id<MLFeatureProvider> _featureProvider;

}

@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithBuffer:(CVBufferRef)arg1 forKey:(id)arg2 originalFeatureProvider:(id)arg3 ;
-(id)featureValueFromScenePrint:(id)arg1 dataType:(long long)arg2 ;
-(id)initWithScenePrint:(id)arg1 dataType:(long long*)arg2 forKey:(id)arg3 originalFeatureProvider:(id)arg4 ;
-(void)dealloc;
@end

