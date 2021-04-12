/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSString;

@interface ARDepthMapData : NSObject <ARResultData> {

	CGImageRef _depthMap;

}

@property (assign,nonatomic) CGImageRef depthMap;                   //@synthesize depthMap=_depthMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDepthMap:(CGImageRef)arg1 ;
-(CGImageRef)depthMap;
@end

