/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SFAcousticFeature : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _acousticFeatureValuePerFrame;
	double _frameDuration;

}

@property (nonatomic,copy,readonly) NSArray * acousticFeatureValuePerFrame;              //@synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame - In the implementation block
@property (nonatomic,readonly) double frameDuration;                                     //@synthesize frameDuration=_frameDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)acousticFeatureValuePerFrame;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(double)frameDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2 ;
@end

