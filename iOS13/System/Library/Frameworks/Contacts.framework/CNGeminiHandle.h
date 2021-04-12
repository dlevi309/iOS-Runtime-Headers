/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNGeminiHandle : NSObject <NSSecureCoding> {

	long long _handleType;
	NSString* _stringValue;

}

@property (nonatomic,readonly) long long handleType;                     //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 type:(long long)arg2 ;
-(long long)handleType;
@end

