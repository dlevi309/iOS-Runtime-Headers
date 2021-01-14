/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceMediaRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying> {

	BWInferenceVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWInferenceVideoFormat * videoFormat;              //@synthesize videoFormat=_videoFormat - In the implementation block
-(BWInferenceVideoFormat *)videoFormat;
-(id)description;
-(unsigned long long)satisfactionHash;
-(id)initWithVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
-(BOOL)isSatisfiedByRequirement:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

