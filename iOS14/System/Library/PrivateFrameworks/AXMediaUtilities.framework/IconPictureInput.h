/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSString, NSSet;

@interface IconPictureInput : NSObject <MLFeatureProvider> {

	NSString* _UIType;
	double _x;
	double _y;
	double _w;
	double _h;

}

@property (nonatomic,retain) NSString * UIType;                   //@synthesize UIType=_UIType - In the implementation block
@property (assign,x,nonatomic) double x;                          //@synthesize x=_x - In the implementation block
@property (assign,y,nonatomic) double y;                          //@synthesize y=_y - In the implementation block
@property (assign,w,nonatomic) double w;                          //@synthesize w=_w - In the implementation block
@property (assign,h,nonatomic) double h;                          //@synthesize h=_h - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(double)h;
-(id)featureValueForName:(id)arg1 ;
-(double)x;
-(double)w;
-(void)setX:(double)arg1 ;
-(NSSet *)featureNames;
-(void)setY:(double)arg1 ;
-(double)y;
-(void)setH:(double)arg1 ;
-(NSString *)UIType;
-(void)setW:(double)arg1 ;
-(id)initWithUIType:(id)arg1 x:(double)arg2 y:(double)arg3 w:(double)arg4 h:(double)arg5 ;
-(void)setUIType:(NSString *)arg1 ;
@end

