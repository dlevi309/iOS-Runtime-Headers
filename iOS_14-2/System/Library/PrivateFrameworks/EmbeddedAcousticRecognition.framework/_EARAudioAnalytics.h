/*
* Generated on Thursday, January 14, 2021 at 2:24:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface _EARAudioAnalytics : NSObject <NSCopying> {

	NSDictionary* _speechRecognitionFeatures;
	NSDictionary* _acousticFeatures;

}

@property (nonatomic,copy,readonly) NSDictionary * speechRecognitionFeatures;              //@synthesize speechRecognitionFeatures=_speechRecognitionFeatures - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * acousticFeatures;                       //@synthesize acousticFeatures=_acousticFeatures - In the implementation block
-(NSDictionary *)speechRecognitionFeatures;
-(NSDictionary *)acousticFeatures;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2 ;
@end

