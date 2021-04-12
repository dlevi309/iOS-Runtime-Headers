/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceVideoRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying> {

	NSString* _preparedByAttachedMediaKey;
	/*^block*/id _videoFormatProvider;

}

@property (nonatomic,copy,readonly) NSString * preparedByAttachedMediaKey;              //@synthesize preparedByAttachedMediaKey=_preparedByAttachedMediaKey - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 videoFormatProvider:(/*^block*/id)arg3 ;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
-(NSString *)preparedByAttachedMediaKey;
-(id)initWithLazyVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(int)prepareForInputVideoFormat:(id)arg1 ;
@end

