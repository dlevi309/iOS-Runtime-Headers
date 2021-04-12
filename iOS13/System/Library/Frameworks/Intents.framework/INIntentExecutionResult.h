/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INIntent, INIntentResponse;

@interface INIntentExecutionResult : NSObject <NSSecureCoding> {

	INIntent* _intent;
	INIntentResponse* _intentResponse;

}

@property (nonatomic,readonly) INIntent * intent;                              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INIntentResponse * intentResponse;              //@synthesize intentResponse=_intentResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(INIntent *)intent;
-(id)_dictionaryRepresentation;
-(INIntentResponse *)intentResponse;
-(id)initWithIntent:(id)arg1 response:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
@end

