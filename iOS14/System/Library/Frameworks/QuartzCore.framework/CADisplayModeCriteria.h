/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGSize)resolution;
-(double)refreshRate;
-(NSString *)hdrMode;
-(id)init;
-(void)setRefreshRate:(double)arg1 ;
-(void)setHdrMode:(NSString *)arg1 ;
-(void)setResolution:(CGSize)arg1 ;
-(void)dealloc;
@end

