/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class NSUUID;

@interface ARFaceTrackingManager : NSObject {

	NSUUID* _singleUserAnchorIdentifier;
	long long _maximumNumberOfTrackedFaces;

}

@property (nonatomic,readonly) long long maximumNumberOfTrackedFaces;              //@synthesize maximumNumberOfTrackedFaces=_maximumNumberOfTrackedFaces - In the implementation block
+(void)initialize;
+(BOOL)isSupported;
-(id)initWithOptions:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(long long)maximumNumberOfTrackedFaces;
-(id)initWithMaximumNumberOfTrackedFaces:(long long)arg1 options:(id)arg2 ;
-(id)faceTrackingOptionsFromImageData:(id)arg1 withCallback:(/*^block*/id)arg2 ;
@end

