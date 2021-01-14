/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARAnchor.h>
#import <ARKitCore/ARTrackable.h>

@class ARReferenceImage, NSString;

@interface ARImageAnchor : ARAnchor <ARTrackable> {

	BOOL _detectionOnly;
	BOOL _isTracked;
	ARReferenceImage* _referenceImage;
	double _estimatedScaleFactor;

}

@property (assign,getter=isDetectionOnly,nonatomic) BOOL detectionOnly;              //@synthesize detectionOnly=_detectionOnly - In the implementation block
@property (assign,nonatomic) BOOL isTracked;                                         //@synthesize isTracked=_isTracked - In the implementation block
@property (nonatomic,readonly) ARReferenceImage * referenceImage;                    //@synthesize referenceImage=_referenceImage - In the implementation block
@property (nonatomic,readonly) double estimatedScaleFactor;                          //@synthesize estimatedScaleFactor=_estimatedScaleFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(NSString *)description;
-(ARReferenceImage *)referenceImage;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isTracked;
-(double)estimatedScaleFactor;
-(void)setEstimatedScaleFactor:(double)arg1 ;
-(void)setDetectionOnly:(BOOL)arg1 ;
-(void)setIsTracked:(BOOL)arg1 ;
-(BOOL)isDetectionOnly;
-(id)initWithReferenceImage:(id)arg1 transform:(SCD_Struct_AR1)arg2 detectionOnly:(BOOL)arg3 tracked:(BOOL)arg4 ;
-(id)copyWithTrackedState:(BOOL)arg1 ;
@end

