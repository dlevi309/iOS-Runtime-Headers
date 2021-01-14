/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

@class NSString;

@interface ARDepthMapData : NSObject <ARResultData> {

	CGImageRef _depthMap;

}

@property (nonatomic,retain) CGImageRef depthMap;                   //@synthesize depthMap=_depthMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGImageRef)depthMap;
-(void)setDepthMap:(CGImageRef)arg1 ;
@end

