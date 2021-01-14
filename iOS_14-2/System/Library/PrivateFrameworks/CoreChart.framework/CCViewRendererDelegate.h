/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <libobjc.A.dylib/CCViewRendererDelegateInterface.h>

@class CCVegaRenderer;

@interface CCViewRendererDelegate : NSObject <CCViewRendererDelegateInterface> {

	CCVegaRenderer* vegaRenderer;

}

@property (__weak) CCVegaRenderer * vegaRenderer; 
-(void)setVegaRenderer:(CCVegaRenderer *)arg1 ;
-(CCVegaRenderer *)vegaRenderer;
-(void)updateNativeView;
-(void)loadURL:(id)arg1 options:(id)arg2 withCallback:(id)arg3 ;
-(id)initWithVegaRenderer:(id)arg1 ;
@end

