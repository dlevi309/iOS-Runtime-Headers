/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ILMessageFilterQueryRequest : NSObject <NSSecureCoding> {

	NSString* _sender;
	NSString* _messageBody;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sender;                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * messageBody;                               //@synthesize messageBody=_messageBody - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(NSString *)messageBody;
-(void)setMessageBody:(NSString *)arg1 ;
-(NSString *)extensionIdentifier;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
@end

