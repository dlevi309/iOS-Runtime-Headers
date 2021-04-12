/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/

#import <TouchML/TouchML-Structs.h>
#import <libobjc.A.dylib/TMLRectJSExports.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TMLPoint, TMLSize;

@interface TMLRect : NSObject <TMLRectJSExports, NSCopying> {

	CGRect _rect;

}

@property (nonatomic,readonly) CGRect rect;                      //@synthesize rect=_rect - In the implementation block
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
+(void)initializeJSContext:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TMLSize *)size;
-(double)width;
-(double)height;
-(id)CGRectValue;
-(id)initWithRect:(CGRect)arg1 ;
-(TMLPoint *)origin;
-(double)x;
-(double)y;
-(CGRect)rect;
-(TMLPoint *)midpoint;
-(id)applyAffineTransform:(id)arg1 ;
-(double)minx;
-(double)miny;
-(double)midx;
-(double)midy;
-(double)maxx;
-(double)maxy;
-(id)inset:(double)arg1 :(double)arg2 ;
-(id)originInset:(double)arg1 :(double)arg2 ;
-(id)offset:(double)arg1 :(double)arg2 ;
-(id)withWidth:(double)arg1 ;
-(id)withHeight:(double)arg1 ;
-(id)atOriginX:(double)arg1 y:(double)arg2 ;
-(id)atOrigin:(id)arg1 ;
-(id)min:(double)arg1 :(double)arg2 ;
-(id)max:(double)arg1 :(double)arg2 ;
-(id)applyScale:(double)arg1 ;
-(id)integral;
-(TMLPoint *)minpoint;
-(TMLPoint *)maxpoint;
@end

