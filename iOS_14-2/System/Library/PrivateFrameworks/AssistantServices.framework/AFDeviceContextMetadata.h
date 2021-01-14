/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSDate, NSArray;

@interface AFDeviceContextMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _backingStore;
	NSString* _type;
	NSDate* _deliveryDate;
	NSDate* _expirationDate;
	NSArray* _redactedKeyPaths;

}

@property (nonatomic,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * deliveryDate;                   //@synthesize deliveryDate=_deliveryDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSArray * redactedKeyPaths;              //@synthesize redactedKeyPaths=_redactedKeyPaths - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)backingStore;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)type;
-(id)initWithBackingStore:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isExpiredByDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(id)arg1 deliveryDate:(id)arg2 expirationDate:(id)arg3 redactedKeyPaths:(id)arg4 ;
-(NSDate *)deliveryDate;
-(NSArray *)redactedKeyPaths;
@end

