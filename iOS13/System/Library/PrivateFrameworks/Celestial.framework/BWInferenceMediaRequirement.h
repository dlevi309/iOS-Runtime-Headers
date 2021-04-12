/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceDataRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying> {

	NSString* _attachedMediaKey;

}

@property (nonatomic,copy,readonly) NSString * attachedMediaKey;              //@synthesize attachedMediaKey=_attachedMediaKey - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)attachedMediaKey;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(id)initWithMediaRequirement:(id)arg1 ;
@end

