/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechAcousticFeature : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _acousticFeatureValuePerFrame;
	double _frameDuration;

}

@property (nonatomic,readonly) NSArray * acousticFeatureValuePerFrame;              //@synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame - In the implementation block
@property (nonatomic,readonly) double frameDuration;                                //@synthesize frameDuration=_frameDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2 ;
-(NSArray *)acousticFeatureValuePerFrame;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)frameDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

