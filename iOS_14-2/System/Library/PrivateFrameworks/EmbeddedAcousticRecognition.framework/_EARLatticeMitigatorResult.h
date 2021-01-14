/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _EARLatticeMitigatorResult : NSObject <NSCopying> {

	float _score;
	float _threshold;
	NSString* _version;

}

@property (nonatomic,copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) float score;                          //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) float threshold;                      //@synthesize threshold=_threshold - In the implementation block
-(float)threshold;
-(float)score;
-(id)description;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVersion:(id)arg1 score:(float)arg2 threshold:(float)arg3 ;
@end

