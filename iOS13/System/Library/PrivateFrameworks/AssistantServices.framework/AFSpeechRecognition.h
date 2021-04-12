/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _phrases;
	NSArray* _utterances;

}

@property (nonatomic,copy,readonly) NSArray * phrases;                 //@synthesize phrases=_phrases - In the implementation block
@property (nonatomic,copy,readonly) NSArray * utterances;              //@synthesize utterances=_utterances - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fakeOneBestFromPhrases:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPhrases:(id)arg1 ;
-(NSArray *)phrases;
-(id)initWithPhrases:(id)arg1 utterances:(id)arg2 ;
-(NSArray *)utterances;
-(id)aceRecognition;
@end

