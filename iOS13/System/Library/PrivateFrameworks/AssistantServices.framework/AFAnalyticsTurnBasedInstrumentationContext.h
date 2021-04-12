/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 ;
-(NSUUID *)turnIdentifier;
-(id)initWithTurnIdentifier:(id)arg1 ;
-(void)emitInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 ;
-(id)nextTurnBasedContext;
@end

