/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <IdentityLookup/ILCommunication.h>

@class NSString;

@interface ILMessageCommunication : ILCommunication {

	NSString* _messageBody;

}

@property (nonatomic,copy,readonly) NSString * messageBody;              //@synthesize messageBody=_messageBody - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)messageBody;
-(BOOL)isEqualToMessageCommunication:(id)arg1 ;
@end

