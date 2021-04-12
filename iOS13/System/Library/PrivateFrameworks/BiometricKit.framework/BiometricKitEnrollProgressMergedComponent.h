/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
*/


@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject {

	long long _componentID;
	BiometricKitEnrollProgressCoordinates* _transformationCoordinates;

}

@property (assign,nonatomic) long long componentID;                                                          //@synthesize componentID=_componentID - In the implementation block
@property (nonatomic,retain) BiometricKitEnrollProgressCoordinates * transformationCoordinates;              //@synthesize transformationCoordinates=_transformationCoordinates - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setTransformationCoordinates:(BiometricKitEnrollProgressCoordinates *)arg1 ;
-(long long)componentID;
-(void)setComponentID:(long long)arg1 ;
-(BiometricKitEnrollProgressCoordinates *)transformationCoordinates;
@end

