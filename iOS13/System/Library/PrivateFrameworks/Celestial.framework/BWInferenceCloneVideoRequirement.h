/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceVideoRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoRequirement;

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying> {

	BWInferenceVideoRequirement* _sourceVideoRequirement;

}

@property (nonatomic,readonly) BWInferenceVideoRequirement * sourceVideoRequirement;              //@synthesize sourceVideoRequirement=_sourceVideoRequirement - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)videoFormat;
-(id)initWithAttachedMediaKey:(id)arg1 sourceVideoRequirement:(id)arg2 ;
-(BWInferenceVideoRequirement *)sourceVideoRequirement;
-(id)initWithCloneVideoRequirement:(id)arg1 ;
@end

