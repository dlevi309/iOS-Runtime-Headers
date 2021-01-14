/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString, NSDictionary;

@interface AFAssertionContext : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	unsigned long long _timestamp;
	NSString* _reason;
	NSDictionary* _userInfo;
	AFAssertionContext* _parentContext;

}

@property (nonatomic,readonly) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) AFAssertionContext * parentContext;              //@synthesize parentContext=_parentContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSDictionary *)userInfo;
-(unsigned long long)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSString *)reason;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(AFAssertionContext *)parentContext;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTimestamp:(unsigned long long)arg1 reason:(id)arg2 userInfo:(id)arg3 parentContext:(id)arg4 ;
@end

