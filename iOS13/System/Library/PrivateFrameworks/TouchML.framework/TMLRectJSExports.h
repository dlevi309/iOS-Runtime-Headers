/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

@class TMLPoint, TMLSize;


@protocol TMLRectJSExports <JSExport>
@property (nonatomic,readonly) double x; 
@property (nonatomic,readonly) double y; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) TMLPoint * origin; 
@property (nonatomic,readonly) TMLSize * size; 
@property (nonatomic,readonly) double minx; 
@property (nonatomic,readonly) double midx; 
@property (nonatomic,readonly) double maxx; 
@property (nonatomic,readonly) double miny; 
@property (nonatomic,readonly) double midy; 
@property (nonatomic,readonly) double maxy; 
@property (nonatomic,readonly) TMLPoint * minpoint; 
@property (nonatomic,readonly) TMLPoint * midpoint; 
@property (nonatomic,readonly) TMLPoint * maxpoint; 
@required
-(TMLSize *)size;
-(double)width;
-(double)height;
-(TMLPoint *)origin;
-(double)x;
-(double)y;
-(TMLPoint *)midpoint;
-(id)applyAffineTransform:(id)arg1;
-(double)minx;
-(double)miny;
-(double)midx;
-(double)midy;
-(double)maxx;
-(double)maxy;
-(id)inset:(double)arg1 :(double)arg2;
-(id)originInset:(double)arg1 :(double)arg2;
-(id)offset:(double)arg1 :(double)arg2;
-(id)withWidth:(double)arg1;
-(id)withHeight:(double)arg1;
-(id)atOriginX:(double)arg1 y:(double)arg2;
-(id)atOrigin:(id)arg1;
-(id)min:(double)arg1 :(double)arg2;
-(id)max:(double)arg1 :(double)arg2;
-(id)applyScale:(double)arg1;
-(id)integral;
-(TMLPoint *)minpoint;
-(TMLPoint *)maxpoint;

@end

