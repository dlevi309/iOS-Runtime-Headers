/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EMTToken : NSObject <NSCopying> {

	BOOL _precededBySpace;
	BOOL _followedBySpace;
	float _confidence;
	NSString* _text;

}

@property (nonatomic,readonly) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) float confidence;                  //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL precededBySpace;              //@synthesize precededBySpace=_precededBySpace - In the implementation block
@property (nonatomic,readonly) BOOL followedBySpace;              //@synthesize followedBySpace=_followedBySpace - In the implementation block
-(float)confidence;
-(id)description;
-(NSString *)text;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)precededBySpace;
-(BOOL)followedBySpace;
-(id)initWithText:(id)arg1 confidence:(float)arg2 precededBySpace:(BOOL)arg3 followedBySpace:(BOOL)arg4 ;
@end

