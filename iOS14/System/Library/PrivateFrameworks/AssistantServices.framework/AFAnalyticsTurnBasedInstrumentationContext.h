/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, SISchemaClientTurnContext;

@interface AFAnalyticsTurnBasedInstrumentationContext : NSObject <NSSecureCoding> {

	NSUUID* _turnIdentifier;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) NSUUID * turnIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)newTurnBasedContextWithPreviousTurnID:(id)arg1 ;
-(id)init;
-(NSUUID *)turnIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTurnIdentifier:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 ;
-(id)nextTurnBasedContext;
@end

