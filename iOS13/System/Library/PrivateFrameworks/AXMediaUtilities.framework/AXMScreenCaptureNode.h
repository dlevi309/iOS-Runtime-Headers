/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>

@class AXMScreenGrabber;

@interface AXMScreenCaptureNode : AXMSourceNode {

	AXMScreenGrabber* _screenGrabber;

}

@property (nonatomic,retain) AXMScreenGrabber * screenGrabber;              //@synthesize screenGrabber=_screenGrabber - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)nodeInitialize;
-(AXMScreenGrabber *)screenGrabber;
-(void)produceImage:(id)arg1 ;
-(void)triggerWithScreenCaptureRegion:(CGRect)arg1 interfaceOrientation:(long long)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)setScreenGrabber:(AXMScreenGrabber *)arg1 ;
@end

