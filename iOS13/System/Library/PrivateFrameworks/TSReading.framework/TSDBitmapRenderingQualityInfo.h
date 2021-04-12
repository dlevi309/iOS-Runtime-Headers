/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject {

	int mQuality;
	float mCanvasScale;
	NSMutableDictionary* mImageMap;

}

@property (nonatomic,readonly) int quality; 
-(void)dealloc;
-(int)quality;
-(void)cacheProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(CGImageRef)degradedImageRefForProvider:(id)arg1 ofSize:(CGSize)arg2 ;
-(id)initWithQuality:(int)arg1 canvasScale:(float)arg2 ;
@end

