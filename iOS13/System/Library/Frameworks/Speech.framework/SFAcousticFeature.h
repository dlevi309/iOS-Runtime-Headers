/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)frameDuration;
-(NSArray *)acousticFeatureValuePerFrame;
-(id)_initWithAcousticFeatureValue:(id)arg1 frameDuration:(double)arg2 ;
@end

