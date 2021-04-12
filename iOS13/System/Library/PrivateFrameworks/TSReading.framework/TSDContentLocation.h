/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSDContentLocation : NSObject <NSCopying> {

	double _viewScale;
	CGPoint _unscaledPoint;

}

@property (assign,nonatomic) CGPoint unscaledPoint;              //@synthesize unscaledPoint=_unscaledPoint - In the implementation block
@property (assign,nonatomic) double viewScale;                   //@synthesize viewScale=_viewScale - In the implementation block
+(id)contentLocation;
+(id)contentLocationWithUnscaledPoint:(CGPoint)arg1 viewScale:(double)arg2 ;
+(id)contentLocationInterpolatingFromLocation:(id)arg1 toLocation:(id)arg2 fraction:(double)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(double)viewScale;
-(CGPoint)unscaledPoint;
-(void)setUnscaledPoint:(CGPoint)arg1 ;
@end

