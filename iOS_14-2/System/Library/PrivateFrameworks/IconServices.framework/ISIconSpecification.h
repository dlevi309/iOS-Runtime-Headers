/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class NSArray;

@interface ISIconSpecification : NSObject {

	double _maxScale;
	double _minScale;
	NSArray* _imageSpecifications;
	CGSize _maxSize;
	CGSize _minSize;

}

@property (readonly) NSArray * imageSpecifications;                 //@synthesize imageSpecifications=_imageSpecifications - In the implementation block
@property (readonly) CGSize maxSize;                                //@synthesize maxSize=_maxSize - In the implementation block
@property (readonly) CGSize minSize;                                //@synthesize minSize=_minSize - In the implementation block
@property (readonly) double maxScale;                               //@synthesize maxScale=_maxScale - In the implementation block
@property (readonly) double minScale;                               //@synthesize minScale=_minScale - In the implementation block
@property (readonly) NSArray * allImageSpecifications; 
+(id)macosIconSpecification;
+(id)macosTemplateIconSpecification;
+(id)defaultIconSpecification;
-(CGSize)minSize;
-(double)minScale;
-(double)maxScale;
-(CGSize)maxSize;
-(id)_initWithImageSpecifiactions:(id)arg1 ;
-(id)imageSpecificationForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSArray *)allImageSpecifications;
-(NSArray *)imageSpecifications;
@end

