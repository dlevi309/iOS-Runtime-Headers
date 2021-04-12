/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
*/


#import <SearchToShareCore/SearchToShareCore-Structs.h>
@class NSArray;

@interface STSAnimatedImageInfo : NSObject {

	NSArray* _frames;
	double _duration;

}

@property (nonatomic,copy) NSArray * frames;               //@synthesize frames=_frames - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) CGSize size; 
-(void)setDuration:(double)arg1 ;
-(NSArray *)frames;
-(void)setFrames:(NSArray *)arg1 ;
-(CGSize)size;
-(double)duration;
@end

