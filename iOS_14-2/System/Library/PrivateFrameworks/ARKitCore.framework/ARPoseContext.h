/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARResultDataContext.h>

@class NSString;

@interface ARPoseContext : NSObject <ARResultDataContext> {

	long long _cameraPosition;
	/*^block*/id _cameraTransformCallback;

}

@property (assign,nonatomic) long long cameraPosition;              //@synthesize cameraPosition=_cameraPosition - In the implementation block
@property (nonatomic,copy) id cameraTransformCallback;              //@synthesize cameraTransformCallback=_cameraTransformCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)cameraPosition;
-(id)imageData;
-(id)resultDataOfClass:(Class)arg1 ;
-(void)setCameraPosition:(long long)arg1 ;
-(id)cameraTransformCallback;
-(void)setCameraTransformCallback:(id)arg1 ;
@end

