/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
-(id)initWithDictionary:(id)arg1 ;
-(void)setCode:(NSNumber *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)code;
-(id)initWithCode:(id)arg1 domain:(id)arg2 message:(id)arg3 ;
@end

