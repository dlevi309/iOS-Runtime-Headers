/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSString;

@interface CADisplayModeCriteria : NSObject {

	CADisplayModeCriteriaPriv* _priv;

}

@property (assign) CGSize resolution; 
@property (assign) double refreshRate; 
@property (copy) NSString * hdrMode; 
-(id)init;
-(void)dealloc;
-(NSString *)hdrMode;
-(double)refreshRate;
-(void)setRefreshRate:(double)arg1 ;
-(void)setHdrMode:(NSString *)arg1 ;
-(CGSize)resolution;
-(void)setResolution:(CGSize)arg1 ;
@end

