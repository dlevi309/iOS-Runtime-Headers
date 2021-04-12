/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _speechRecognitionFeatures;
	NSDictionary* _acousticFeatures;

}

@property (nonatomic,readonly) NSDictionary * speechRecognitionFeatures;              //@synthesize speechRecognitionFeatures=_speechRecognitionFeatures - In the implementation block
@property (nonatomic,readonly) NSDictionary * acousticFeatures;                       //@synthesize acousticFeatures=_acousticFeatures - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2 ;
-(NSDictionary *)speechRecognitionFeatures;
-(NSDictionary *)acousticFeatures;
@end

