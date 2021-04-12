/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARImageBasedTechnique.h>

@class NSUUID;

@interface ARFaceTrackingTechnique : ARImageBasedTechnique {

	NSUUID* _singleUserAnchorIdentifier;
	BOOL _isFaceTracked;
	long long _maximumNumberOfTrackedFaces;

}

@property (assign) BOOL isFaceTracked;                                             //@synthesize isFaceTracked=_isFaceTracked - In the implementation block
@property (nonatomic,readonly) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
+(BOOL)isSupported;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(unsigned long long)requiredSensorDataTypes;
-(id)resultDataClasses;
-(long long)maximumNumberOfTrackedFaces;
-(id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 ;
-(BOOL)isFaceTracked;
-(void)setIsFaceTracked:(BOOL)arg1 ;
@end

