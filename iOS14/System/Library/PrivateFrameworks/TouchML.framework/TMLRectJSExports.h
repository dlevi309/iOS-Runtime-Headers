/*
* Generated on Thursday, January 14, 2021 at 2:28:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)x;
-(TMLPoint *)origin;
-(double)width;
-(double)y;
-(double)minx;
-(double)miny;
-(double)midx;
-(double)midy;
-(double)maxx;
-(double)maxy;
-(TMLSize *)size;
-(double)height;
-(TMLPoint *)midpoint;
-(id)min:(double)arg1 :(double)arg2;
-(id)max:(double)arg1 :(double)arg2;
-(id)inset:(double)arg1 :(double)arg2;
-(id)applyAffineTransform:(id)arg1;
-(id)originInset:(double)arg1 :(double)arg2;
-(id)offset:(double)arg1 :(double)arg2;
-(id)withWidth:(double)arg1;
-(id)withHeight:(double)arg1;
-(id)atOriginX:(double)arg1 y:(double)arg2;
-(id)atOrigin:(id)arg1;
-(id)applyScale:(double)arg1;
-(id)integral;
-(TMLPoint *)minpoint;
-(TMLPoint *)maxpoint;

@end

