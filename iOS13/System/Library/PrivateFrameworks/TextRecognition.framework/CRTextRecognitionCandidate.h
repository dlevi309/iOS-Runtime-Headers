/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSString;

@interface CRTextRecognitionCandidate : NSObject {

	int _confidenceLevel;
	NSString* _text;

}

@property (readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (readonly) int confidenceLevel;              //@synthesize confidenceLevel=_confidenceLevel - In the implementation block
-(NSString *)text;
-(int)confidenceLevel;
-(id)initWithText:(id)arg1 confidenceLevel:(int)arg2 ;
@end

