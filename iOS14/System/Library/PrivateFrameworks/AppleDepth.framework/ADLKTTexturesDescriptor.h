/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@class ADImageDescriptor, NSArray;

@interface ADLKTTexturesDescriptor : NSObject {

	unsigned long long _scales;
	ADImageDescriptor* _inputDescriptor;
	NSArray* _pyramidsDescriptors;
	NSArray* _featuresDescriptors;
	NSArray* _derivitivesDescriptors;
	ADImageDescriptor* _shiftmapDescriptor;

}

@property (nonatomic,readonly) unsigned long long scales;                           //@synthesize scales=_scales - In the implementation block
@property (nonatomic,readonly) ADImageDescriptor * inputDescriptor;                 //@synthesize inputDescriptor=_inputDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * pyramidsDescriptors;                       //@synthesize pyramidsDescriptors=_pyramidsDescriptors - In the implementation block
@property (nonatomic,readonly) NSArray * featuresDescriptors;                       //@synthesize featuresDescriptors=_featuresDescriptors - In the implementation block
@property (nonatomic,readonly) NSArray * derivitivesDescriptors;                    //@synthesize derivitivesDescriptors=_derivitivesDescriptors - In the implementation block
@property (nonatomic,readonly) ADImageDescriptor * shiftmapDescriptor;              //@synthesize shiftmapDescriptor=_shiftmapDescriptor - In the implementation block
-(unsigned long long)scales;
-(CGSize)inputSizeForLayout:(unsigned long long)arg1 ;
-(NSArray *)pyramidsDescriptors;
-(NSArray *)featuresDescriptors;
-(NSArray *)derivitivesDescriptors;
-(ADImageDescriptor *)shiftmapDescriptor;
-(id)initForSize:(CGSize)arg1 scales:(unsigned)arg2 ;
-(ADImageDescriptor *)inputDescriptor;
@end

