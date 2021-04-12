/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)subject;
-(NSString *)firstSenderAddress;
-(id)initWithHeaders:(id)arg1 ;
-(NSString *)listID;
-(NSString *)firstRecipient;
@end

