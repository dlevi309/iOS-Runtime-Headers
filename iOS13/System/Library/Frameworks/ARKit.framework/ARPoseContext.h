/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARResultDataContext.h>

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
-(id)imageData;
-(long long)cameraPosition;
-(void)setCameraPosition:(long long)arg1 ;
-(id)resultDataOfClass:(Class)arg1 ;
-(id)cameraTransformCallback;
-(void)setCameraTransformCallback:(id)arg1 ;
@end

