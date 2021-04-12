/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceDataRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying> {

	NSString* _attachedMediaKey;

}

@property (nonatomic,copy,readonly) NSString * attachedMediaKey;              //@synthesize attachedMediaKey=_attachedMediaKey - In the implementation block
-(id)description;
-(id)initWithMediaRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(NSString *)attachedMediaKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

