/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/

@class NSArray, CALayer;


@protocol CCUIGroupRendering <NSObject>
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) NSArray * punchOutRootLayers; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
@optional
-(CALayer *)punchOutRootLayer;

@required
-(BOOL)isGroupRenderingRequired;
-(NSArray *)punchOutRootLayers;

@end

