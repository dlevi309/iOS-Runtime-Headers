/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface AXElementVision__generated__Input : NSObject <MLFeatureProvider> {

	CVBufferRef _image;
	double _iouThreshold;
	double _confidenceThreshold;

}

@property (assign,nonatomic) CVBufferRef image;                       //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) double iouThreshold;                     //@synthesize iouThreshold=_iouThreshold - In the implementation block
@property (assign,nonatomic) double confidenceThreshold;              //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setImage:(CVBufferRef)arg1 ;
-(double)iouThreshold;
-(void)setIouThreshold:(double)arg1 ;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(CVBufferRef)image;
-(id)initWithImage:(CVBufferRef)arg1 iouThreshold:(double)arg2 confidenceThreshold:(double)arg3 ;
@end

