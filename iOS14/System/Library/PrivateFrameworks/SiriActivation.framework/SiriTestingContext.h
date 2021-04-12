/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriContext.h>

@class NSDictionary;

@interface SiriTestingContext : SiriContext {

	NSDictionary* _testingContext;

}

@property (nonatomic,readonly) NSDictionary * testingContext;              //@synthesize testingContext=_testingContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)testingContext;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsRecognitionStrings;
-(BOOL)containsAudioInput;
-(id)initWithPPTContext:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithRecognitionStrings:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithAudioInput:(id)arg1 siriContextOverride:(id)arg2 ;
-(id)initWithPPTContext:(id)arg1 ;
-(id)initWithRecognitionStrings:(id)arg1 ;
-(id)initWithAudioInput:(id)arg1 ;
@end

