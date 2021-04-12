/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ILMessageFilterReportRequest : NSObject <NSSecureCoding> {

	NSString* _sender;
	NSString* _messageBody;
	long long _suggestedAction;
	NSString* _extensionIdentifier;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sender;                                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * messageBody;                               //@synthesize messageBody=_messageBody - In the implementation block
@property (assign,nonatomic) long long suggestedAction;                          //@synthesize suggestedAction=_suggestedAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)sender;
-(void)setSender:(NSString *)arg1 ;
-(void)setMessageBody:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)messageBody;
-(id)initWithExtensionIdentifier:(id)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(long long)suggestedAction;
-(void)setSuggestedAction:(long long)arg1 ;
@end

