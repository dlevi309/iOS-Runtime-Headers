/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface EMListUnsubscribeCommandMessageHeaders : NSObject <NSSecureCoding> {

	NSString* _firstRecipient;
	NSString* _subject;
	NSString* _firstSenderAddress;
	NSString* _listID;

}

@property (nonatomic,readonly) NSString * firstRecipient;                  //@synthesize firstRecipient=_firstRecipient - In the implementation block
@property (nonatomic,readonly) NSString * subject;                         //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * firstSenderAddress;              //@synthesize firstSenderAddress=_firstSenderAddress - In the implementation block
@property (nonatomic,readonly) NSString * listID;                          //@synthesize listID=_listID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)subject;
-(id)initWithHeaders:(id)arg1 ;
-(NSString *)firstSenderAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)listID;
-(NSString *)firstRecipient;
@end

