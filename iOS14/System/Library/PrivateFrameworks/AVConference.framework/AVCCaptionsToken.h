/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSString;

@interface AVCCaptionsToken : NSObject {

	NSString* _text;
	double _confidence;
	BOOL _hasSpaceAfter;

}

@property (nonatomic,readonly) NSString * text;                 //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) double confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL hasSpaceAfter;              //@synthesize hasSpaceAfter=_hasSpaceAfter - In the implementation block
-(double)confidence;
-(id)description;
-(NSString *)text;
-(BOOL)hasSpaceAfter;
-(void)dealloc;
-(id)initWithText:(id)arg1 confidence:(double)arg2 spaceAfter:(BOOL)arg3 ;
@end

