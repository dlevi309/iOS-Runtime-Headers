/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDSwatchRenderingResult : NSObject {

	CGImageRef foreground;
	CGImageRef background;

}

@property (nonatomic,readonly) CGImageRef foreground; 
@property (nonatomic,readonly) CGImageRef background; 
+(id)renderingResultWithForeground:(CGImageRef)arg1 background:(CGImageRef)arg2 ;
-(void)dealloc;
-(CGImageRef)background;
-(CGImageRef)foreground;
@end

