/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSArray *)utterances;
-(NSArray *)phrases;
-(id)initWithPhrases:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPhrases:(id)arg1 utterances:(id)arg2 ;
-(id)aceRecognition;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

