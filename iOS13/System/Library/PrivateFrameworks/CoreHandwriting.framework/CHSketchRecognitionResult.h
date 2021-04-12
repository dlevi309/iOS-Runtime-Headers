/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult {

	NSString* _string;
	double _rotation;

}

@property (readonly) NSString * string;              //@synthesize string=_string - In the implementation block
@property (readonly) double rotation;                //@synthesize rotation=_rotation - In the implementation block
-(NSString *)string;
-(void)dealloc;
-(double)rotation;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 ;
@end

