/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
*/


@class NSString;

@interface FKTextCandidate : NSObject {

	float _confidence;
	NSString* _text;

}

@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (readonly) float confidence;                            //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(NSString *)text;
-(id)initWithText:(id)arg1 confidence:(float)arg2 ;
@end

