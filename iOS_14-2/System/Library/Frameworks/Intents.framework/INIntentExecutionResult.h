/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INIntent *)intent;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(INIntentResponse *)intentResponse;
-(id)initWithIntent:(id)arg1 response:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

