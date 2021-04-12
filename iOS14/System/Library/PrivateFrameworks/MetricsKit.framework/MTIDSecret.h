/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MTIDSecret : NSObject <NSSecureCoding> {

	BOOL _isSynchronized;
	NSString* _value;
	NSDate* _expirationDate;
	NSString* _key;

}

@property (nonatomic,copy) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * value;                     //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL isSynchronized;                //@synthesize isSynchronized=_isSynchronized - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)rawValue;
-(void)setValue:(NSString *)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRawValue:(id)arg1 ;
-(id)debugInfo;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 expirationDate:(id)arg3 ;
-(BOOL)isSynchronized;
-(void)setIsSynchronized:(BOOL)arg1 ;
-(id)initWithScheme:(id)arg1 date:(id)arg2 ;
@end

