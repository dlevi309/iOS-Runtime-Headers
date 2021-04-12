/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriContext.h>

@class NSDictionary;

@interface SiriTestingContext : SiriContext {

	NSDictionary* _testingContext;

}

@property (nonatomic,readonly) NSDictionary * testingContext;              //@synthesize testingContext=_testingContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)testingContext;
-(id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithPPTContext:(id)arg1 ;
-(id)initWithRecognitionStrings:(id)arg1 ;
-(id)initWithAudioInput:(id)arg1 ;
-(BOOL)containsPPT;
-(BOOL)containsRecognitionStrings;
-(BOOL)containsAudioInput;
@end

