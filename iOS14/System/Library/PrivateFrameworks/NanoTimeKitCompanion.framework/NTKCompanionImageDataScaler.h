/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@class NSData;

@interface NTKCompanionImageDataScaler : NSObject {

	NSData* _outputData;
	NSData* _data;
	long long _orientation;
	CGSize _inputSize;
	CGSize _outputSize;
	CGRect _inputCrop;

}

@property (nonatomic,readonly) CGSize inputSize;                   //@synthesize inputSize=_inputSize - In the implementation block
@property (nonatomic,readonly) CGRect inputCrop;                   //@synthesize inputCrop=_inputCrop - In the implementation block
@property (nonatomic,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) CGSize outputSize;                  //@synthesize outputSize=_outputSize - In the implementation block
-(CGSize)inputSize;
-(NSData *)data;
-(long long)orientation;
-(CGRect)inputCrop;
-(CGSize)outputSize;
-(id)initWithSize:(CGSize)arg1 crop:(CGRect)arg2 data:(id)arg3 orientation:(long long)arg4 outputSize:(CGSize)arg5 ;
-(void)cropAndScaleWithCompletion:(/*^block*/id)arg1 ;
@end

