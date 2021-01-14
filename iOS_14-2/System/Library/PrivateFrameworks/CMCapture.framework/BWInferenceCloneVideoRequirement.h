/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceVideoRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoRequirement;

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying> {

	BWInferenceVideoRequirement* _sourceVideoRequirement;

}

@property (nonatomic,readonly) BWInferenceVideoRequirement * sourceVideoRequirement;              //@synthesize sourceVideoRequirement=_sourceVideoRequirement - In the implementation block
-(id)videoFormat;
-(id)description;
-(BWInferenceVideoRequirement *)sourceVideoRequirement;
-(id)initWithCloneVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 sourceVideoRequirement:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

