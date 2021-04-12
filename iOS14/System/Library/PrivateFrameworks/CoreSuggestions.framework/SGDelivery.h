/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface SGDelivery : SGObject <NSSecureCoding> {

	NSURL* _parentURL;
	NSString* _externalIdentifier;
	unsigned long long _provider;
	NSString* _trackingNumber;

}

@property (nonatomic,readonly) NSURL * parentURL;                          //@synthesize parentURL=_parentURL - In the implementation block
@property (nonatomic,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long provider;                //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) NSString * trackingNumber;                  //@synthesize trackingNumber=_trackingNumber - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)providerForString:(id)arg1 ;
+(id)deliveryForEntity:(id)arg1 store:(id)arg2 ;
+(id)deliveryForEntity:(id)arg1 origin:(id)arg2 ;
+(id)stringForProvider:(unsigned long long)arg1 ;
-(unsigned long long)provider;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)externalIdentifier;
-(NSString *)trackingNumber;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecordId:(id)arg1 origin:(id)arg2 parentURL:(id)arg3 provider:(unsigned long long)arg4 trackingNumber:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)parentURL;
@end

