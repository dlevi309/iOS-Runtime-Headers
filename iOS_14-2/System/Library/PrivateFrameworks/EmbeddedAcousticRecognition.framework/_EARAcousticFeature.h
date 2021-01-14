/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface _EARAcousticFeature : NSObject <NSCopying> {

	NSArray* _acousticFeatureValuePerFrame;
	double _frameDuration;

}

@property (nonatomic,copy,readonly) NSArray * acousticFeatureValuePerFrame;              //@synthesize acousticFeatureValuePerFrame=_acousticFeatureValuePerFrame - In the implementation block
@property (nonatomic,readonly) double frameDuration;                                     //@synthesize frameDuration=_frameDuration - In the implementation block
-(NSArray *)acousticFeatureValuePerFrame;
-(double)frameDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithAcousticFeatureValues:(id)arg1 frameDuration:(float)arg2 ;
@end

