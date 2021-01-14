/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isSupported;
+(id)title;
-(AXMScreenGrabber *)screenGrabber;
-(void)produceImage:(id)arg1 ;
-(void)triggerWithScreenCaptureRegion:(CGRect)arg1 interfaceOrientation:(long long)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)setScreenGrabber:(AXMScreenGrabber *)arg1 ;
-(void)nodeInitialize;
@end

