/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CCVegaHTMLElement.h>
#import <libobjc.A.dylib/CCVegaCGCanvasInterface.h>

@class CCVegaCGContext;

@interface CCVegaCGCanvas : CCVegaHTMLElement <CCVegaCGCanvasInterface> {

	CCVegaCGContext* context;

}

@property (nonatomic,retain) CCVegaCGContext * context; 
@property (assign) double width; 
@property (assign) double height; 
-(void)setHeight:(double)arg1 ;
-(double)width;
-(id)init;
-(id)getContext:(id)arg1 ;
-(void)setWidth:(double)arg1 ;
-(double)height;
-(CCVegaCGContext *)context;
-(void)setContext:(CCVegaCGContext *)arg1 ;
@end

