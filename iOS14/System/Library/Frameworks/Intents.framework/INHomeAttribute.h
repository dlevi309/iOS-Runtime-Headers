/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INHomeAttributeExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INHomeAttribute : NSObject <INHomeAttributeExport, NSCopying, NSSecureCoding> {

	BOOL _boolValue;
	long long _type;
	long long _valueType;
	double _doubleValue;
	NSString* _stringValue;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long valueType;                      //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) BOOL boolValue;                           //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) double doubleValue;                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)valueType;
-(double)doubleValue;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithType:(long long)arg1 boolValue:(BOOL)arg2 ;
-(id)initWithType:(long long)arg1 doubleValue:(double)arg2 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 ;
-(id)initWithType:(long long)arg1 valueType:(long long)arg2 boolValue:(BOOL)arg3 doubleValue:(double)arg4 stringValue:(id)arg5 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

