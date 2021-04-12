/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)messageBody;
-(id)initWithSender:(id)arg1 dateReceived:(id)arg2 messageBody:(id)arg3 ;
-(BOOL)isEqualToMessageCommunication:(id)arg1 ;
@end

