/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithString:(id)arg1 type:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)handleType;
-(NSString *)stringValue;
-(id)initWithCoder:(id)arg1 ;
@end

