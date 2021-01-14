/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSArray, NSData, NSError;

@interface WCAKeyValueItem : NSObject <NSSecureCoding> {

	id _value;
	NSString* _key;

}

@property (nonatomic,copy,readonly) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
@property (nonatomic,readonly) NSArray * arrayValue; 
@property (nonatomic,readonly) double doubleValue; 
@property (nonatomic,readonly) float floatValue; 
@property (nonatomic,readonly) int int32Value; 
@property (nonatomic,readonly) long long int64Value; 
@property (nonatomic,readonly) unsigned uint32Value; 
@property (nonatomic,readonly) unsigned long long uint64Value; 
@property (nonatomic,readonly) BOOL boolValue; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) NSData * bytesValue; 
@property (nonatomic,copy,readonly) NSError * error; 
+(BOOL)supportsSecureCoding;
-(NSData *)bytesValue;
-(double)doubleValue;
-(BOOL)boolValue;
-(long long)int64Value;
-(float)floatValue;
-(NSArray *)arrayValue;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(NSError *)error;
-(int)int32Value;
-(id)description;
-(NSString *)key;
-(id)initWithKey:(id)arg1 value:(id)arg2 ;
-(unsigned)uint32Value;
-(unsigned long long)uint64Value;
-(NSDictionary *)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithKey:(id)arg1 error:(id)arg2 ;
@end

