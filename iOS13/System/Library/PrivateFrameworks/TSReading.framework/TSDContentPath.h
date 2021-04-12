/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSArray;

@interface TSDContentPath : NSObject {

	NSArray* _contentLocations;

}

@property (nonatomic,copy) NSArray * contentLocations;              //@synthesize contentLocations=_contentLocations - In the implementation block
+(id)contentPathWithLocations:(id)arg1 ;
-(void)dealloc;
-(id)i_contentLocations;
-(void)setContentLocations:(NSArray *)arg1 ;
-(NSArray *)contentLocations;
-(id)contentLocationAtTime:(double)arg1 withTimingFunction:(id)arg2 ;
@end

