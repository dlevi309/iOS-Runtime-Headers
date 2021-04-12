/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/BCDictionarySerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSDictionary;

@interface BCError : NSObject <BCDictionarySerializable, NSSecureCoding> {

	NSNumber* _code;
	NSString* _domain;
	NSString* _message;

}

@property (nonatomic,retain) NSNumber * code;                               //@synthesize code=_code - In the implementation block
@property (nonatomic,retain) NSString * domain;                             //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(NSString *)domain;
-(NSNumber *)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(void)setCode:(NSNumber *)arg1 ;
-(id)initWithCode:(id)arg1 domain:(id)arg2 message:(id)arg3 ;
@end

