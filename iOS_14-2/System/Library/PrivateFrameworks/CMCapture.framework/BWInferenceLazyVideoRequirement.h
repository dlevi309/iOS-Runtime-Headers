/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceVideoRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying> {

	NSString* _preparedByAttachedMediaKey;
	/*^block*/id _videoFormatProvider;

}

@property (nonatomic,copy,readonly) NSString * preparedByAttachedMediaKey;              //@synthesize preparedByAttachedMediaKey=_preparedByAttachedMediaKey - In the implementation block
-(id)description;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
-(int)prepareForInputVideoFormat:(id)arg1 ;
-(NSString *)preparedByAttachedMediaKey;
-(id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 videoFormatProvider:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLazyVideoRequirement:(id)arg1 ;
-(void)dealloc;
@end

