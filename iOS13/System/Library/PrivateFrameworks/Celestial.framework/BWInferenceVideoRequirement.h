/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceMediaRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying> {

	BWInferenceVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWInferenceVideoFormat * videoFormat;              //@synthesize videoFormat=_videoFormat - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BWInferenceVideoFormat *)videoFormat;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
-(id)initWithVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(BOOL)isSatisfiedByRequirement:(id)arg1 ;
-(unsigned long long)satisfactionHash;
@end

