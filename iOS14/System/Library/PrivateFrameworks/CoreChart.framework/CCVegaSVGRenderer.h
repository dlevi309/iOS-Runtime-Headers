/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/


#import <CoreChart/CoreChart-Structs.h>
@class CCVegaCGContext;

@interface CCVegaSVGRenderer : NSObject {

	CCVegaCGContext* cgCanvas;

}

@property (retain) CCVegaCGContext * cgCanvas; 
+(id)getInstance;
-(CGPathRef)newPathFromJSFunction:(id)arg1 item:(id)arg2 ;
-(void)setCgCanvas:(CCVegaCGContext *)arg1 ;
-(CCVegaCGContext *)cgCanvas;
-(CGPathRef)newPathFromParsedPath:(id)arg1 size:(double)arg2 rendererContext:(id)arg3 ;
-(id)parseString:(id)arg1 rendererContext:(id)arg2 ;
@end

