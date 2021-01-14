/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXBarAnimationOptions : NSObject <NSCopying> {

	long long _type;
	double _duration;

}

@property (assign,nonatomic) long long type;               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setType:(long long)arg1 ;
-(id)description;
-(id)initWithType:(long long)arg1 duration:(double)arg2 ;
-(long long)type;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

