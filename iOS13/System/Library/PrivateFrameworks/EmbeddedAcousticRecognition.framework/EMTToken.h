/*
* Generated on Monday, March 1, 2021 at 2:32:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)confidence;
-(NSString *)text;
-(BOOL)precededBySpace;
-(BOOL)followedBySpace;
-(id)initWithText:(id)arg1 confidence:(float)arg2 precededBySpace:(BOOL)arg3 followedBySpace:(BOOL)arg4 ;
@end

