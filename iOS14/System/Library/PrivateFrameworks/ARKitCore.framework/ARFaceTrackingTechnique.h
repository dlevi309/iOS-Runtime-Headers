/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARImageBasedTechnique.h>

@class NSUUID;

@interface ARFaceTrackingTechnique : ARImageBasedTechnique {

	NSUUID* _singleUserAnchorIdentifier;
	BOOL _isFaceTracked;
	long long _maximumNumberOfTrackedFaces;

}

@property (assign) BOOL isFaceTracked;                                             //@synthesize isFaceTracked=_isFaceTracked - In the implementation block
@property (nonatomic,readonly) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
+(BOOL)isSupported;
-(id)processData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)resultDataClasses;
-(unsigned long long)requiredSensorDataTypes;
-(long long)maximumNumberOfTrackedFaces;
-(id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 ;
-(BOOL)isFaceTracked;
-(void)setIsFaceTracked:(BOOL)arg1 ;
@end

