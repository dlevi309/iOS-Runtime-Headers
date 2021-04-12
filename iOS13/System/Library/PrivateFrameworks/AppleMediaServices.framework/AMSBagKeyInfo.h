/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObject;
@class NSString;

@interface AMSBagKeyInfo : NSObject <NSSecureCoding> {

	NSString* _bagKey;
	id<NSObject> _defaultValue;
	unsigned long long _valueType;

}

@property (nonatomic,readonly) NSString * bagKey;                         //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,readonly) id<NSObject> defaultValue;                 //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,readonly) unsigned long long valueType;              //@synthesize valueType=_valueType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)valueType;
-(id<NSObject>)defaultValue;
-(NSString *)bagKey;
-(id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3 ;
-(id)initWithBagKey:(id)arg1 valueType:(unsigned long long)arg2 ;
@end

